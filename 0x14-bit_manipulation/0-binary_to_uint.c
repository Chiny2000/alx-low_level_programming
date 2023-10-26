#include "main.h"

/**
* binary_to_uint - converts binary number to unsigned int
* @b: string that contains the binary number
* Return: the converted number
*/

unsigned int binary_to_uint(const char *b)
{
int c;
unsigned int num = 0;

if (!b)
return (0);

for (c = 0; b[c]; c++)
{
if (b[c] < '0' || b[c] > '1')
return (0);
num = 2 * num + (b[c] - '0');
}

return (num);
}
