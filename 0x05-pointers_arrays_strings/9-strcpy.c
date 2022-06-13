#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: input
 * @src: input
 * Return: value the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int h = 0;
	int i;

	while (src[h] != '\0')
	{
		h++;
	}
	for (i = 0; i <= h; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
