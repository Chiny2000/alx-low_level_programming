#include "main.h"

/**
 * get_endianness - Determines whether a system follows little-endian or big-endian byte order
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;

return (*c);
}
