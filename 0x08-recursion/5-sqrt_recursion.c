#include "main.h"

/**
 * _sq_help - helper
 * @s: value to compute
 * @n:value to compute
 * Return: output
 */
int _sq_help(int s, int n)
{
	if (s * s == n)
		return (s);
	else if(s == n || s == -n)
		return (-1);
	else
		return (_sq_help(s + 1, n));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: value to compute
 * Return: value of root
 */
int _sqrt_recursion(int n)
{
	return (_sq_help(0, n));
}
