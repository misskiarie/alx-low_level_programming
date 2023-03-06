#include "main.h"
/**
* _memset - fills the first n bytes of memory area pointed to by @s with constant byte @c
* @s: a pointer to the meemory area to be filled
* @b: the character to fil the memory area
* @n: the number of bytes to be filled
* Return: a pointer to the filled memory area @s
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
