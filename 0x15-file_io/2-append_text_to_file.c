#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: String to add to the end of the file
 * Return: eachtime 1 on success or -1 if failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, len);
	close(fd);

	return (w == -1 ? -1 : 1);
}

