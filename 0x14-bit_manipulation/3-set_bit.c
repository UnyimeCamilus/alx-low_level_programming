#include "main.h"
/**
 * set_bit - function that sets the value of a
 * bit
 * @n: the pointer that point to n
 * @index: is the starting from 0 of the bit you want to set
 * Return: 1 0r -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(unsigned int) * 0)
		return (-1);
	mask = 1;
	mask = mask << index;
	*n = ((*n) | mask);
	return (1);
}
