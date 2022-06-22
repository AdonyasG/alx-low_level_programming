#include "main.h"

/**
 * _strlen_recursion - returns the length of the string
 * @s: character to compute
 * Return:
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
