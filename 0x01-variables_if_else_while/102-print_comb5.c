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
	int j;
	int k;

	for (h = '0'; h <= '9'; h++)
	{
	for (i = '0'; i <= '9'; i++)
	{
	for (j = h; j <= '9'; j++)
	{
	for (k = i + 1; k <= '9'; k++)
	{
		putchar(h);
		putchar(i);
		putchar(' ');
		putchar(j);
		putchar(k);
	if (!((h == '9' && i == '8') && (j == '9') && (k == '9')))
	{
		putchar(',');
		putchar(' ');
	}
	}
		k = '0';
	}
	}
	}
	putchar('\n');
	return (0);
}
