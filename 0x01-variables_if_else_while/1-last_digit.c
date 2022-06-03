#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return:always return 0
 *
 */
int main(void)
{
	int n;
	int newN;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	newN = n % 10;
	if (newN > 5)
	{
		printf("Last digit of %d is %d and greater than 5\n", n, newN);
	} else if (newN == 0)
	{
		printf("Last digit of %d is %d and 0\n", n, newN);
	} else
	{
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, newN);
	}
	return (0);
}
