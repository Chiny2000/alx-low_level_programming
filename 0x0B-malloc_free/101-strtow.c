#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_tab - Displays a string array.
* @tab: The array intended for printing.
*
* Return: nothing
*/
void print_tab(char **tab)
{
int i;

for (i = 0; tab[i] != NULL; ++i)
{
printf("%s\n", tab[i]);
}
}

/**
* main - Review the code for ALX School students.
*
* Return: Returns 1 in case of an error, otherwise returns 0
*/
int main(void)
{
char **tab;

tab = strtow("      ALX School         #cisfun      ");
if (tab == NULL)
{
printf("Failed\n");
return (1);
}
print_tab(tab);
return (0);
}
