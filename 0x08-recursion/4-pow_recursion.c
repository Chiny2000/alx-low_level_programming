#include "main.h"

/**
*_pow_recursion - returns the value of x exponent y
*@x: the Index
*@y: the exponent
*
*Return: the value multiplied y times
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
