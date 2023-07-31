#include "main.h"
/**
*_strchr - It locates charaater in a string
*@s: input
*@c: input
*Return: s or NULL
*/
char *_strchr(char *s, char c)
{
int i = 0;

for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
