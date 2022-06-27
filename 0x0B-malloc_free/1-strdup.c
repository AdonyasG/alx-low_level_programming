#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: copy of a string
 * Return: pointer to a newly allocated space.
 */
char *_strdup(char *str)
{
	char *strl;
	unsigned int i = 0;
	unsigned int j;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	strl = malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		strl[j] = str[j];
	return (strl);
}
