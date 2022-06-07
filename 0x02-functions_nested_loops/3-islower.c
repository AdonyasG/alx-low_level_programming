#include "main.h"

/**
 * main - entry point
 *
 * @c: character to compare
 *
 * Return: 0 if its false and 1 if its true
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	return (0);
}
