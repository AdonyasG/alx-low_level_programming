#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element if an array integers
 * @a: input
 * @n: character to compute
 * Return:
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	if (i != n - 1)
	{
		printf("%d, ", a[i]);
	}
	else
	{
		printf("%d", a[i]);
	}
	}
	printf("\n");
}
