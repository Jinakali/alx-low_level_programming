/**
 *_sqrt_recursion_helper- approximate square root using babylon method
 *@approx: guesstimate of the square root
 *@n: number whose sqrt is to be found
 *Return: sqrt estimate
 */
int _sqrt_recursion_helper(unsigned long approx, unsigned long n)
{
	unsigned long next_approx = (approx + n / approx) / 2;/* babylon mwthod*/

	if ((approx * approx) <= n && ((approx + 1) * (approx + 1)) > n)
		return (approx);
	else
		return (_sqrt_recursion_helper(next_approx, n));
}
/**
 *_sqrt_recursion- find square root
 *@n: number whose sqrt is to be found
 *Return: sqrt only if natural
 */
int _sqrt_recursion(int n)
{
	unsigned long sqrt;

	if (n <= 0)
		return (-1);

	sqrt = _sqrt_recursion_helper(1, (unsigned long) n);

	if (sqrt * sqrt != (unsigned long) n)
		return (-1);
	return (sqrt);
}
