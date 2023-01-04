#include "search_algos.h"
/**
 * linear_search - performs Linear Search
 * @array: pointer to the first element
 * @size: number of elements in array
 * @value: value to search for
 * Return: value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
