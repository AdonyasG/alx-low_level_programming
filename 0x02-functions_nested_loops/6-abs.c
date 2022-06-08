#include "main.h"

/**
 * _abs - entry point
 *
 * 
 * Return: int
 *
 */
int _abs(int num)
{
	if (num < 0)
	{
	num = -1 * num;
		_putchar(num);
	}
	else
	{
		_putchar(num);
	}
	return (num);
}
