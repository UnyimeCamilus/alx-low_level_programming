#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: is pointing to the string of 0 and 1 chars
 * Return: converted numbers
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	unsigned int i;
	unsigned int j;
	unsigned int sum = 0;
	unsigned int pow = 1;
	unsigned int base = 2;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
	{
		return (b[0] - 48);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
	}

	for (j = len - 1; j > 0; j--)
	pow = pow * base;
	sum = sum + (pow + (b[i] - 48));
		len--;
	pow = 1;

	return (sum);
}
