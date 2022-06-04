#include <stdio.h>

/**
 * main - entry point
 *
 * Return:always return 0
 *
 */
int main(void)
{
	int i;
	int n;

	for (i = 10; i <= 19; i++)
	{
	for (n = 10; n <= 19; n++)
	{
	if ((n % 10) > (i % 10))
	{
		putchar((i % 10) + '0');
		putchar((n % 10) + '0');
	if (i != 18 || n != 19)
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
