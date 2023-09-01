/**
 * wildcmp_helper - recursively compares s1 and s2 after the asterisk
 * @s1: string to be evaluated
 * @s2: string
 *
 * Return: 1 if same else 0
 */
int wildcmp_helper(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		return 1; /* End of s2 reached, strings match*/
	}

	if (*s1 != *s2)
	{
		return 0;
	}

	if (*s1 == *s2)
	{
		if (wildcmp_helper(s1 + 1, s2 + 1))
		{
			return 1;
		}
	}

	return wildcmp_helper(s1 + 1, s2);
}

/**
 * wildcmp - recursively compare 2 strings
 * @s1: string to be evaluated
 * @s2: string
 *
 * Return: 1 if same else 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		s2++;
		if (*s2 == '*')
		{
			s2++;
		}
		if (*s2 == '\0')
		{
			return 1;
		}
		return wildcmp_helper(s1, s2);
	}

	if (*s1 == '\0' && *s2 == '\0')
	{
		return 1;
	}

	if ((*s1 == '\0' && *s2 != '\0') || (*s2 == '\0' && *s1 == '\0'))
	{
		return 0;
	}

	if (*s1 != *s2)
	{
		return 0;
	}
	else
	{
		return wildcmp(s1 + 1, s2 + 1);
	}
}
