#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, otherwise exit with an error code
 */
int main(int argc, char **argv)
{
	int from_file_descriptor, to_file_descriptor, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from_file_descriptor = open(argv[1], O_RDONLY);
	if (from_file_descriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to_file_descriptor = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (to_file_descriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(from_file_descriptor, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(to_file_descriptor, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(from_file_descriptor);
			close(to_file_descriptor);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(from_file_descriptor);
		close(to_file_descriptor);
		exit(98);
	}
	if (close(from_file_descriptor) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_file_descriptor);
		exit(100);
	}
	if (close(to_file_descriptor) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_file_descriptor);
		exit(100);
	}
	return (0);
}
