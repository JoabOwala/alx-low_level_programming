#include <stdio.h>
/**
*main - Entry point
*
*Return: 0
*/
int main(void)
{
  char ad='a';
  while (ad <='z')
    {
      if(ad !='e' && ad !='q')
	{
	  putchar(ad);
	}
      ad++;
    }
  putchar('\n');
  return (0);
}
