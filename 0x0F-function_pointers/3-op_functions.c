#include "3-calc.h"

/**
 * op_add - computes the sum of two integers
 * @a: initial integer
 * @b: subsequent integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - computes the difference of two integers
 * @a: initial integer
 * @b: subsequent integer
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - computes the product of two integers
 * @a: initial integer
 * @b: subsequent integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - computes the division of two integers
 * @a: initial integer
 * @b: subsequent integer
 *
 * Return: result of the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - computes the modulus of two integers
 * @a: initial integer
 * @b: subsequent integer
 *
 * Return: remainder of a divided b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
