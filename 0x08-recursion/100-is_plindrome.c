#include "main.h"

int check_palindrome(char *s);

int is_palindrome(char *s)
{
  if (*s == '0')
    return (1);
  return (check_palindrome(s));
}

int check_palindrome(char *s)
{
  int l = _strlen_recursion(s) - 1;

  if (*s == s[l])
    {
      s++;
      l--;
    }
  else
    {
      return (0);
    }
  return (1);
}

int _strlen_recursion(char *s)
{
  if (*s == '\0')
    {
      return (0);
    }
  s++;
  return (_strlen_recursion(s) + 1);
}
