#include "3-calc.h"
/**
 *op_add - find sum
 *@a: int operand
 *@b: int operand
 *
 *Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - subtract
 *@a: int operand
 *@b: int operand
 *
 *Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - multiply
 *@a: int
 *@b: int
 *
 *Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - divide
 *@a: int
 *@b: int
 *
 *Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 *op_mod - find reminder
 *@a: int
 *@b: int
 *
 *Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
