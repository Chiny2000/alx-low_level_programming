#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _print - Shifts a string to the left by one position and then prints the updated string.
* @str: string to move
* @l: size of string
*
* Return: void
*/

int isNumber(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		if (s[i] < '0' || s[i] > '9')
			return (0);
	return (1);
}

/**
* mul  Performs character multiplication with a string and stores the result in the 'dest' variable.
* @n: char to multiply
* @num: string to multiply
* @num_index: the final index in 'num' that is not NULL
* @dest: Resulting product destination
* @dest_index: starting point for addition at the maximum index
* Return: destination pointer or NULL if unsuccessful
*/

void print_result(int *result, int len)
{
	int i;

	/* remove leading zeros */
	for (i = 0; i < len && result[i] == 0; i++)
		;

	/* if all digits are 0, print 0 */
	if (i == len)
		printf("0");

	/* print the result */
	for (; i < len; i++)
		printf("%d", result[i]);

	printf("\n");
}

/**
 * main - multiplies two positive numbers
 * @ac: number of arguments
 * @av: array of arguments
 * Return: 0
 */
int main(int ac, char **av)
{
	int i, j, num1_len, num2_len;
	int *result;

	if (ac != 3 || !isNumber(av[1]) || !isNumber(av[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1_len = strlen(av[1]);
	num2_len = strlen(av[2]);

	result = calloc(num1_len + num2_len, sizeof(int));
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	/* multiply each digit of num1 with num2 */
	for (i = num1_len - 1; i >= 0; i--)
	{
		for (j = num2_len - 1; j >= 0; j--)
		{
			/* multiply each digit and add to result */
			int mul = (av[1][i] - '0') * (av[2][j] - '0');

			/* add to previous result */
			int sum = result[i + j + 1] + mul;

			/* update result */
			result[i + j] += sum / 10;
			result[i + j + 1] = sum % 10;
		}
	}

	/* print result and free the allocated memory */
	print_result(result, num1_len + num2_len);
	free(result);
	return (0);
}
