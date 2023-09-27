/**
 *is_prime_number_helper - helps check if prime number
 *@n: no to be checked
 *@f: factor divisibility checker
 *Return: 1 if prime 0 otherwise
 */
int is_prime_number_helper(int f, int n)
{
	if (n <= 1)
		return (0);
	if (n % f == 0 && f != n)
		return (0);
	if (n == f)
		return (1);
	return (is_prime_number_helper(f + 1, n));
}
/**
 *is_prime_number - check if prime number
 *@n: no to be checked
 *Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	int x = n;

	return (is_prime_number_helper(2, x));
}
