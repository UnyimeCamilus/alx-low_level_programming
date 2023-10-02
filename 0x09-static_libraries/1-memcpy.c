#include "main.h"

/**
  * _memcpy - main function prototype
  *
  * @src: This is the Source parameter
  *
  * @dest: This is the Destination parameter
  *
  * @n: This is the n byte Function parameter
  *
  * Return: Copied memory
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
	dest[k] = src[k];
	}
	return (dest);
}
