#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: character to compute
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char sub;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i > j)
	{
		sub = s[j];
		s[j] = s[i];
		s[i] = sub;
		i--;
		j++;
	}
}
