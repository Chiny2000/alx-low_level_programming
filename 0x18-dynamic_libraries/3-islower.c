#include "main.h"

/**
 * _islower - check if char is lowercase
 * @c: is the char to be checkedi
 * Return: 1 if char is lowercase or 0 for anything else.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
