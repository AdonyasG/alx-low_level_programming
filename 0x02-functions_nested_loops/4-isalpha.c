#include "main.h"

/**
 * _isalpha - entry point
 *
 * @c: character to compare
 *
 * Return: 0 if its false and 1 if its true
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	return (0);
}
