#include <stdio.h>
/**
*main - prins sum of multiples of 3 5 to 1024
*Return: Always (Success) 
*/
int main(void)
{
int i, z = 9;

while (i < 1024)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
z += i;
}
i++;
}
printf("%d", z);
return (0);
}
