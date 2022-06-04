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
	int j;

	for (i = 10; i <= 19; i++)
	{
	for (n = 10; n <= 19; n++)
	{
	for (j = 10; j <= 19; j++)
	{
	if ((j % 10) > (n % 10) && (n % 10) > (i % 10))
	{
		putchar((i % 10) + '0');
		putchar((n % 10) + '0');
		putchar((j % 10) + '0');
	if (i != 17 || n != 18 || j != 19)
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
