#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - entry point
 * @n: parameter to compare
 *
 * Return: n
 */
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
