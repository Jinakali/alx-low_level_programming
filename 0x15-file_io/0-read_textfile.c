#include "main.h"
/**
 *read_textfile-read text and print to STDOUT_FILENO
 *@filename:textfile
 *@letters: number of letters it should read and print
 *Return:the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t no_r_print, fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	no_r_print = read(fd, buffer, letters);
	if (no_r_print == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	no_r_print = write(STDOUT_FILENO, buffer, no_r_print);
	if (no_r_print == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (no_r_print);
}
