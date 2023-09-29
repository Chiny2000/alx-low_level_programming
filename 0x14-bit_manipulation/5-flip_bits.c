#include "main.h"

/**
 * flip_bits - Determines the count of bits that need modification 
 * to transition from one number to another
 * @fn: first number
 * @sn: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int fn, unsigned long int sn)
{
int i, counter = 0;
unsigned long int current;
unsigned long int exclusive = fn ^sn;

for (i = 63; i >= 0; i--)
{
current = exclusive >> i;
if (current & 1)
counter++;
}

return (counter);
}
