#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int fdr;
	int bytes_written;

	if (filename == NULL)
		return (-1);

	fdr = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fdr == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytes_written = write(fdr, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fdr);
			return (-1);
		}
	}
	close(fdr);
	return (1);
}
