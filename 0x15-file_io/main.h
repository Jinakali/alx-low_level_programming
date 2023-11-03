#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void _close(int fd_to, int fd_from);
void read_error(char *from_path);
void cp_from_to(char *from_path, char *to_path);
#endif/*main/h*/
