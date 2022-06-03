#include <stdio.h>
/**
*main - Entry point
*
*Return: 0
*/
int main(void)
{
char ad;
for(ad = 'a';ad<='z';ad++)
{
if(ad=='q')
continue;
else if(ad=='e')
continue;
putchar('\n');
return(0);
}
}
