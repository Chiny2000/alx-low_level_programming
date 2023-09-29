#include "main.h"

/**
 * print_binary - displays the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
int i, counter = 0;
unsigned long int currentn;

for (i = 63; i >= 0; i--)
{
currentn = n >> i;

if (currentn & 1)
{
_putchar('1');
counter++;
}
else if (counter)
_putchar('0');
}
if (!counter)
_putchar('0');
}
