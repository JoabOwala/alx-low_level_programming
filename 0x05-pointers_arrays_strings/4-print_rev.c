#include "main.h"
/**
 *
 */

void print_rev(char *s)
{
  int c = 0;
  while (*s != '\0')
    {
      c++;
      s++;
    }
  while (c >= 0)
    {
      _putchar(*s);
      s--;
      c--;
    }
  _putchar('\n');
}
