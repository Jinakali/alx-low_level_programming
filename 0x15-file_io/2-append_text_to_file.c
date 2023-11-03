#include "main.h"
/**
 *_strlen - print length of string
 *@s: string whose length must be found
 *
 *Return: string length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
/**
  *append_text_to_file-appends text at the end of a file
  *@filename:name of the file to create
  *@text_content:NULL terminated string to write to the file
  *Return:1 on success otherwise -1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, r_check;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content != NULL && *text_content != '\0')
	{
		r_check = write(fd, text_content, _strlen(text_content));
		if (r_check < 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
