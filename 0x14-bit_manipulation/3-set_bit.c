#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @np: pointer to the number to change
 * @indexb: index of the bit to set to 1
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *np, unsigned int indexb)
{
if (indexb > 63)
return (-1);

*np = ((1UL << indexb) | *np);
return (1);
}
