#include "3-calc.h"
/**
 *op_add-sums
 *@a:1st operand
 *@b:2nd operand
 *Return:sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub-subtract
 *@a:1st operand
 *@b:2nd operand
 *Return:difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul-multiply
 *@a:1st operand
 *@b:2nd operand
 *Return:product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div-divide
 *@a:1st operand
 *@b:2nd operand
 *Return:reslt
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
 *op_mod-find remainder
 *@a:1st operand
 *@b:2nd operand
 *Return:remainder
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
