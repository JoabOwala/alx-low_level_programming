#include "main.h"

/**
 *main - Start here
 *
 *Return: Always 0.
 */
int _islower(int c)
{
  if (c >= 'a' && c <= 'z')
    return (1);
  else
    return (0);
}
