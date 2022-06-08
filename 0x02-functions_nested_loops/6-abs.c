#include "main.h"
/**
 * _abs - entry point
 * @num: parameter to compare
 *
 * Return: num
 */
int _abs(int num)
{
	if (num < 0)
		return (num * -1);
	else
		return (num);
}
