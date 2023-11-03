#include "main.h"
/**
 *main-copies the content of a file to another file
 *@argc:no of args
 *@argv:arg strings
 *Return: 0 always
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp_from_to(argv[1], argv[2]);
	return (0);
}
/**
 *cp_from_to- content of a file to another file.
 *@from_path:source
 *@to_path:destination
 */
void cp_from_to(char *from_path, char *to_path)
{
	int fd_from, fd_to, letters;
	char buffer[1024];

	if (from_path == NULL)
		read_error(from_path);

	fd_from = open(from_path, O_RDONLY);
	if (fd_from < 0)
		read_error(from_path);

	/*open to file,flags create|trunc|write, mode rwrwr*/
	fd_to = open(to_path, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR |
S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_path);
		close(fd_from);
		exit(99);
	}
	/*read from contents to buffer*/
	while ((letters = read(fd_from, buffer, 1024)) > 0)
	{
		if (write(fd_to, buffer, letters) != letters)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_path);
			close(fd_to);
			close(fd_from);
			exit(99);
		}

	}
	if (letters < 0)
		read_error(from_path);
	_close(fd_to, fd_from);
}
/**
*read_error-print error to stderr and exit
*@from_path:source file
*/
void read_error(char *from_path)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_path);
	exit(98);
}
/**
*_close- closes opened file descriptors
*@fd_to: dest
*@fd_from:source
*/
void _close(int fd_to, int fd_from)
{
	if (close(fd_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_to);
		exit(100);
	}
	if (close(fd_from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_from);
		exit(100);
	}
}
