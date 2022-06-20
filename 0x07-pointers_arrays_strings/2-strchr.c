#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: string to locate character
 * @c: character to find
 * Return: char value
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] == c)
	{
		return (s + i);
	}
	s++;
	}
	return (0);
}
