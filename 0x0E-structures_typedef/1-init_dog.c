#include "dog.h"


/**
* init_dog - Creates an instance of the 'struct dog' type variable
* @d: pointer for initializing "a struct dog"
* @name: Name for initialization
* @age: dog's age initialization
* @owner: pointer to owner of dog
*
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
