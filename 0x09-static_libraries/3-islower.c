#include "main.h"
/**
 * _islower - entry point
 * Discription: functions that print lowercase character
 * @c:character to print if it islowercase
 * Return: 0 if lowercase, 1 if not
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
