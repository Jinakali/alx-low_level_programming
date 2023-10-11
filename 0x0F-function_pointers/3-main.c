#include "3-calc.h"
/**
 *main-performs simple operations
 *@argc:no of args
 *@argv:argument strings
 *Return:o always
 */
int main(int argc, char **argv)
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) != NULL)
	{
		result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", result);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
