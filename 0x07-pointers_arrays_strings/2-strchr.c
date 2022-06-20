#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: string to locate character
 * @c: character to find
 * Return: char value
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
		return (s);
	}
	s++;
	}
	return (0);
}
