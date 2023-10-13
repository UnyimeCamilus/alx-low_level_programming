#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: the point of array
 * @size: the integer of size
 * @cmp: the function to be used to compare values
 *
 * Return: -1 if size <=0
 */
int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
