#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return: 0
 *
 */
void print_alphabet_x10(void)
{
	char i;
	char A;

	for (i = 0; i <= 9; i++)
	{
	for (A = 'a'; A <= 'z'; A++)
	{
	_putchar(A);
	}
	_putchar('\n');
	}
}
