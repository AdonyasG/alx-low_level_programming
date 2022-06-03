#include <stdio.h>

/**
 * main - entry point
 *
 * Return:always return 0
 *
 */
int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; --lc)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
