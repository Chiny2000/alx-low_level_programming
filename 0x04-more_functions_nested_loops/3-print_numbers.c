#include "main.h"

/**
 * print_numbers - Print numbers
 * between 0 and 9
 *
 * Return: nothing
 */

void print_numbers(void)
{
int i = 0;
while (i <= 9)
{
_putchar(i + '0');
i++;
}
_putchar('\n');
}
