#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

char *create_buffer(void);
void close_file(int fd);

/**
 * create_buffer - Allocates memory for a buffer.
 * Return: eachtime, pointer to the newly-allocated buffer.
 */

char *create_buffer(void)
{
	char *buffer = malloc(sizeof(char) * BUFFER_SIZE);

	if (buffer == NULL)
	{
		perror("Error: Can't allocate memory for buffer");
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */


void close_file(int fd)
{
	if (close(fd) == -1)
	{
		perror("Error: Can't close file descriptor");
		exit(100);
	}
}

/**
 * main - Program that copies the content of one file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to command-line arguments.
 * Return: eachtime, 0 on success,
 * or exit with appropriate error codes on failure.
 */

int main(int argc, char *argv[])
{
	int from_fd, to_fd, bytes_read, bytes_written;
	char *buffer;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	buffer = create_buffer();
	from_fd = open(argv[1], O_RDONLY);

	if (from_fd == -1)
	{
		perror("Error: Can't read from file");
		free(buffer);
		exit(98);
	}

	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (to_fd == -1)
	{
		perror("Error: Can't write to file");
		free(buffer);
		exit(99);
	}

	do	{
		bytes_read = read(from_fd, buffer, BUFFER_SIZE);

		if (bytes_read == -1)
		{
			perror("Error: Can't read from file");
			free(buffer);
			exit(98);
		}

		bytes_written = write(to_fd, buffer, bytes_read);

		if (bytes_written == -1)
		{
			perror("Error: Can't write to file");
			free(buffer);
			exit(99);
		}

	} while (bytes_read > 0);

	free(buffer);
	close_file(from_fd);
	close_file(to_fd);

	return (0);
}
