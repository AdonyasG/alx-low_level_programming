#include "main.h"

/**
 * print_sign - entry point
 *
 * @c: character to compare
 *
 * Return: 0 if its false and 1 if its true
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	return (1);
	}
	if (n == 0)
	{
		_putchar('0');
	return (0);
	}
		_putchar('-');
	return (-1);
}
