#include "main.h"

/**
 *create_file- creates a file
 *@filename:name of file
 *@text_content:contents of a file
 *Return:Return 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int wr;
	int letters;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	for (letters = 0; text_content[letters]; letters++)
		;

	wr = write(fd, text_content, letters);

	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
