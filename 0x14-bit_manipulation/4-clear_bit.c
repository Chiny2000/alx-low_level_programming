#include "main.h"

/**
 * clear_bit - Changes the value of a specified bit to 0
 * @np: pointer to the number to change
 * @indexb: index of the bit to clear
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *np, unsigned int indexb)
{
if (indexb > 63)
return (-1);

*np = (~(1UL << indexb) & *np);
return (1);
}
