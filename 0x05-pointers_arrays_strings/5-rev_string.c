#include "main.h"
/**
 *
 */
void rev_string(char *s)
{
  int i = 0, j = 0;
  char tmp[20];
  while (*(s + i))
    {
      *(tmp + i) = *(s + i);
      i++;
    }
  i = i - 1;
  while (i >= 0)
    {
      *(s + i) = *(tmp + j);
      j++;
      i--;
    }
}
