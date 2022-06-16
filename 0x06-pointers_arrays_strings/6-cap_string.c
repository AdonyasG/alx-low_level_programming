#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @a: string
 * Return: a
 */
char *cap_string(char *a)
{
	int i = 0;

	if (a[i] >= 97 && a[i] <= 122)
	{
		a[i] -= 32;
	}
	while (a[i] != '\0')
	{
		if (a[i] == ' ' || a[i] == '\n' || a[i] == '\t'
		    || a[i] == ',' || a[i] == ';' || a[i] == '.'
		    || a[i] == '!' || a[i] == '?' || a[i] == '"'
		    || a[i] == '(' || a[i] == ')' || a[i] == '{'
		    || a[i] == '}')
		{
			if (a[i + 1] >= 97 && a[i + 1] <= 122)
			{
				a[i + 1] -= 32;
			}
		}
		i++;
	}
	return (a);
}
