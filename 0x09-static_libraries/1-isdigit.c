#include "main.h"

/**
 * _isdigit - determine if digit
 * @c: character to determing
 * Return: gives boolean
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
