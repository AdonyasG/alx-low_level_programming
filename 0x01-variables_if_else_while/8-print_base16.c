#include <stdio.h>

/**
 * main - entry point
 *
 * Return:always return 0
 *
 */
int main(void)
{
	unsigned char l = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(l);
		l++;
	}
	l = '1';

	for (i = 0; i < 6; i++)
	{
		putchar('0' + l);
		l++;
	}
	putchar('\n');
	return (0);
}
