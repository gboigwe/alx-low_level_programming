#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - This will read a text file
 * @filename: The name f the file stored as a pointer
 * @letters: The size the letters is going to take
 * Description: Write a function that reads a text file
 * and prints it to the POSIX standard output.
 * Return: All letters that were read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	lenr = read(fd, buffer, letters);
	close(fd);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
