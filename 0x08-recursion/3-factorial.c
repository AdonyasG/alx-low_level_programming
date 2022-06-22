#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: character to compute
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (1 * factorial(n - 1));
}
