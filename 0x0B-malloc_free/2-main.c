#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s, *i, *j, *k;

    s = str_concat("Betty ", "Holberton");
    i = str_concat("Hello", NULL);
    j = str_concat(NULL, "Hello");
    k = str_concat(NULL, NULL);
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n%s\n%s\n%s\n", s, i, j, k);
    free(s);
    return (0);
}
