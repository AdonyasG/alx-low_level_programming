#include <stdio.h>

/**
 * main - entry point
 *
 * Return:always return 0
 *
 */
int main(void)
{
	int h;
	int i;

	for (h = 0; h <= 99; i++)
	{
	for (i = h + 1; i <= 99; i++)
	{
		putchar(h / 10 + '0');
		putchar(h % 10 + '0');
		putchar(' ');
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
	if (!(h == 98 && i == 99))
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
