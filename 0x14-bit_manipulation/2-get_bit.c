#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_bit - returns the value of bit at a given index
 * @n: number to compute
 * @index: starting point of bit you want to get
 * Returns: the value of bit index 0 or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	return (n >> index & 1);
}
