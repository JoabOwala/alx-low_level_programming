#include "main.h"

/**
* main - check the code
*
*Return: Always 0.
*/
void print_alphabet(void)
{
int alp;

for (alp ='a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
  
}
int main(void)
{
print_alphabet();
return (0);
}
