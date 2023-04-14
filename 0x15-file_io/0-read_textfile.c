#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 * @letters: number of letters it should read and print
 * @filename: file to be used
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fpr;
	char *buff;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
	{
		return (0);
	}

	fpr = fopen(filename, "r");

	if (fpr == NULL)
	{
		return (0);
	}
	buff = (char *) malloc(sizeof(char) * (letters + 1));

	if (buff == NULL)
	{
		fclose(fpr);
		return (0);
	}

	bytes_read = fread(buff, sizeof(char), letters, fpr);

	if (bytes_read == -1)
	{
		fclose(fpr);
		free(buff);
		return (0);
	}
	buff[bytes_read] = '\0';
	bytes_written = fwrite(buff, sizeof(char), bytes_read, stdout);

	free(buff);

	if (bytes_written != bytes_read)
	{
		fclose(fpr);
		return (0);
	}
	fclose(fpr);
	return (bytes_read);
}
