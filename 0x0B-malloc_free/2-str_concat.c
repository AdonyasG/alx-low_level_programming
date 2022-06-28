#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: a pointer to a newly allocated space in memory.
 * which contains the contents of s1, followed by the contents of s2
 */
char *str_concat(char *s1, char *s2)
{
	char *alphas;
	int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	alphas = malloc(sizeof(char) * (i + j + 1));
	if (alphas == NULL)
	{
		free(alphas);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		alphas[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		alphas[k + i] = s2[k];
	}
	alphas[k + i] = '\0';
	return (alphas);
}
