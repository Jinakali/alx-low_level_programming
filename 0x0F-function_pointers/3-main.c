#include "3-calc.h"
/**
 *main -  performs simple operations
 *@argc: count argument
 *@argv: operands
 *
 *Return: 1 always when successful
 */
int main(int argc, char **argv)
{
	int num1, num2, (*ptr_op)(int, int), result;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (*operator != '+' && *operator != '-' &&
*operator != '/' && *operator != '*' && *operator != '%')
	{
		printf("Error\n");
		exit(99);
	}
	/**
	 *if (get_op_func(operator) == NULL)
	 *{
	 *	printf("Error\n");
	 *	exit(99);
	 }
	 */

	ptr_op = get_op_func(operator);
	result = ptr_op(num1, num2);
	printf("%d\n", result);
	return (1);
}
