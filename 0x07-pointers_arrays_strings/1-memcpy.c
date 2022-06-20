#include "main.h"

/**
 * _memcpy - fnction that copies memory area
 * @dest: array to compute
 * @src: array to compute
 * @n: n value
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
