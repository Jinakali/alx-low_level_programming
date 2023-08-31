/**
 *is_prime_number_helper - help find prome number
 *@n: number
 *@i:lower limit
 *@limit: upper limit
 *
 * Return: prime number
 */
int is_prime_number_helper(int n, int i, int limit)
{
	if (n < 2)
		return (0);
	else if (i > limit)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (is_prime_number_helper(n, i + 1, limit));
}
/**
 *is_prime_number - find prime
 *@n: the number
 *
 *Return: prime
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (is_prime_number_helper(n, 2, n / 2));
}
