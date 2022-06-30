#include "main.h"
#include <stdlib.h>
/**
 * _calloc - calloc function
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer or void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *v;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	v = malloc(nmemb * size);
	if (v == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		v[i] = 0;

	return (v);
}
