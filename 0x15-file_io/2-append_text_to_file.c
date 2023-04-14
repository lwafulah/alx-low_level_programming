#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file
 * Return 1 if the file exists and -1 if the file does not exist or
 * if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdr;
	size_t len;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	fdr = open(filename, O_WRONLY | O_APPEND);
	if (fdr == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		bytes_written = write(fdr, text_content, len);

		if (bytes_written == -1)
		{
			close(fdr);
			return (-1);
		}
	}
	close(fdr);
	return (1);
}
