#include <stdio.h>

void startupFunction(void) __attribute__((constructor));

/**
* startupFunction -Displays output prior to the
* execution of the main function.
*
*/
void startupFunction(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
