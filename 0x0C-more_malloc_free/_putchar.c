#include <unistd.h>

int _putchar(char c)
{
    return write(1, &c, 1);
}

int main()
{
    char character = 'A';
    _putchar(character); // Calls the custom _putchar function to print the character

    return 0;
}
Just make sure that the _putchar function definition is included before the point where you intend to use it, as shown in the example above.






