#include "function_pointers.h"

/**
 * int_index -searches for an integer.
 * @array: input
 * @cmp: function pointer
 * @size: number of elements in the array
 * Return: no retur, -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
