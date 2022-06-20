#include "main.h"
/**
*
*/

unsigned int _strspn(char *s, char *accept)
{
int a, b, counter = 0;
for (a =0; s[a] != '\0'; i++)
if (counter != a)
break;
for (b = 0; accept[b] != '\0'; b++)
{
if (s[a] == accept[b])
counter++;
}
}
return (counter);
}
