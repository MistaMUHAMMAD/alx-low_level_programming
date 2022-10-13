#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array to search through
 * @size: size of array.
 * @cmp: function used to compare.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	if (size > 0 && array && cmp)
	{
		for (I = 0; i < size; i++)
		{
			r = cmp(array[i]);
			if (r)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
