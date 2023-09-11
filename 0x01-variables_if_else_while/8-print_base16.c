#include <stdio.h>
/**
 * main - A program that print the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)

{
	char letter;
	int num;

	for (letter = 'a'; letter <= 'f'; letter++)
	putchar(letter);

	for (num = 0; num < 10; num++)
	putchar((num % 10) + '0');

	putchar('\n');
	return (0);

}
