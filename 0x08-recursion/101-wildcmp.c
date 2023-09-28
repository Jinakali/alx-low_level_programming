/**
 *wildcmp_h - factors that * can replace any string (including an empty string)
 *@s1: base
 *@s2: test
 *Return: 1 if equal 0 otherwise
 */
int wildcmp_h(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		/* '*' matches an empty string*/
		if (wildcmp_h(s1, s2 + 1))
			return (1);
		/* '*' matches one or more characters*/
		if (*s1 != '\0' && wildcmp_h(s1 + 1, s2))
			return (1);
		return (0);  /* If neither condition matches, return 0*/
	}
	if (*s1 == *s2)
		return (wildcmp_h(s1 + 1, s2 + 1));
	return (0);  /* If characters don't match, return 0*/
}
/**
 *wildcmp - simple string compare
 *@s1: base
 *@s2: test
 *Return: 1 if equal, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
		return (wildcmp_h(s1, s2));
	if (*s1 != *s2)
		return (0);
	if ((*s1 == '\0' && *s2 != '\0') || (*s1 != '\0' && *s2 == '\0'))
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (wildcmp(s1 + 1, s2 + 1));
}
