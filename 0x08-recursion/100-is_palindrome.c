#include "main.h"
/**
 * slength - helper
 * @s: string
 * Return: string length
 */
int slength(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + slength(s + 1);
		return (i += 1);
	}
	return (0);
}
/**
 * phelper2 - helper
 * @i: intege i
 * @s: string
 * Return: int value
 */
int phelper2(int i, char *s)
{
	if (*s)
	{
		if (*s != s[slength(s) - i])
		{
			return (0);
		}
		else
		{
			return (phelper2(i + 1, s + 1));
		}
	}
	return (1);
}
/**
 * is_palindrome - is it paldindrome
 * @s: string to check
 * Return: boolean
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (phelper2(i, s));

}
