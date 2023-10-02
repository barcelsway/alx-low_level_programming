#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: A string to write in the file
 *
 * Return: 1 if it success, if it fails return -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int let;
	int w;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (let = 0; text_content[let]; let++)
		;

	w = write(fd, text_content, let);

	if (w == -1)
		return (-1);

	close(fd);

	return (1);
}
