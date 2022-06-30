#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concats strings
 * @s1: string one
 * @s2: string two
 * @n: n amount of bytes
 * Return: return a char val
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *c;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	j = 0;
	k = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[k] != '\0')
		k++;
	if (n >= k)
		n = k;
	c = malloc(sizeof(char) * n + j + 1);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		c[i] = s1[i];
	for (i = 0; i < n; i++)
	       c[i + j] = s2[i];
	c[i + j] = '\0';
	return (c);
}
