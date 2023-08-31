/**
 *_sqrt_recursion_helper - estimate the square root of a number
 *@n: number whose square root needs to be found
 *@guess:estimate of sqrt starting from 1
 *
 *Return:sqrt
 */
int _sqrt_recursion_helper(int n, int guess)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int new_guess = (guess + n / guess) / 2;
		
		if (new_guess == guess)
		{
			return (guess);
		}
		else
		{
			return (_sqrt_recursion_helper(n, new_guess));
		}
	}
}
/**
 *_sqrt_recursion - find sqrt of a number
 *@n: number whose sqrt needs to be found
 *
 *Return: sqrt of number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 1));
}
