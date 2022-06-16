#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: dest for concat
 * @src: source array to concat
 * @n: amount of times to append
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, ++i)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
