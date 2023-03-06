/*
* File: 0-memset.c
* Auth: not
*/
#include "main.h"
/**
 * _memeset - fills the first n bytes of memory area pointed to by @s with constant byte @c
 * @s: a pointer to the meemory area to be filled
 * @b: the character to fil the memory area
 * @n: the number of bytes to be filled
 * description _memset: over there
 * return: a pointer to the filled memory area @s
*/
char *_memset(char *s, char b, unsigned int n);
{
unsigned int index;
unsigned char *memory = s, value = b;
for (index =0; index < n; index++)
memory[index] = value;
return (memory);
}
