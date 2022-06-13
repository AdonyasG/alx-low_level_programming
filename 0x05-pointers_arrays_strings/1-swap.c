#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @n:integer to compute
 * @b:integer to compute
 */
void swap_int(int *n, int *b)
{
	int t = *n;
	*n = *b;
	*b = t;
}
