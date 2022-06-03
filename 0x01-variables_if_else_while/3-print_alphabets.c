#include <stdio.h>
/**
*main -Entry point
*
*Return:0
*/
int main(void)
{
char small;
char cap;

for (small= 'a'; small<='z';small++)
{
putchar(small);
}
for (cap='A';cap<='Z';cap++)
{
putchar(cap);
}
putchar('\n');
return (0);
}
