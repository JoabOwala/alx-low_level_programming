#include <stdio.h>
/**
*main - Entry point
*
*Return: 0
*/
int main(void)
{
int n;
char ab;

for (n='0';n<'9';n++)
{
putchar(n);
}
for(ab='a';ab<'f';ab++)
{
putchar(ab);
}
putchar('\n');
return (0);
}
