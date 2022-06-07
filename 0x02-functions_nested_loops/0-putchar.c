#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
  char *ch = "_putchar";
  while (*ch)
    {
      _putchar(*ch);
      ch++;
    }
  _putchar('\n');

  return (0);
}
