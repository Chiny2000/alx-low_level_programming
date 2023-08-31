#include "main.h"

/**
 * get_bit - Yields the bit's value at a specified
 * index within a decimal number.
 * @ns: number to search
 * @indexb: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int ns, unsigned int indexb)
{
int bit_value;

if (indexb > 63)
return (-1);

bit_value = (ns >> indexb) & 1;

return (bit_value);
}
