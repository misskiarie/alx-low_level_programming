#include "main.h"
/**
*_isalpha - checks for alphabets in lower an upper case
*@c: a charachter to be checked
*Return: returns 0 or 1 depending on output
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'B'));
}
