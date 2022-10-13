#include "function_pointers.h"

/**
 * array_iteratori - searches for an integer
 *
 * @array: The array.
 * @size: The size of array.
 * @action: A pointer to the function to be executed.
 *
 * Return: no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		
		for (i = 0; i < size; i++)
			action([i]);
}
