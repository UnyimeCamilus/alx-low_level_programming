#include <stdio.h>
#include <unistd.h>
/**
 * main - A program that print all single digit numbers of base 10 function
 * Return: 0
 */
int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
	{
	putchar(b + '0');
	}
	putchar('\n');
	return (0);
}
