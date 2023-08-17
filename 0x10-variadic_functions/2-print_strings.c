#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Displays string.
* @separator: The string to appear amidst the other strings when printed.
* @n: The count of strings provided to the function
* @...: An adjustable quantity of strings for printing
*
* Description: If separator is NULL, it is not printed.
*              If one of the strings if NULL, (nil) is printed instead.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int index;

va_start(strings, n);

for (index = 0; index < n; index++)
{
str = va_arg(strings, char *);

if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(strings);
}
