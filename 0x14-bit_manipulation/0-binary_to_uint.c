#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to a string 0f 0 and 1 chars
 * Return: converted number or zero
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
