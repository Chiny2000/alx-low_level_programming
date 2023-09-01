#include "main.h"

/**
 * flip_bits - Calculates the count of bits that need to be altered
 * to transition from one number to another
 * @n: initial  number
 * @m: subsequent number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}

