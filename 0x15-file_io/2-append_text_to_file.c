#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: this is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 if the file exit and -1 if the file does not exit
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

		if (fd == -1)
			return (-1);
	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;
		rwr = write(fd, text_content, nletters);
		if (rwr == -1)
			return (-1);
	}
	close(fd);

	return (1);
}