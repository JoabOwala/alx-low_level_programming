#include "main.h"
/**
*
*/

char *_strpbrk(char *s, char *accept)
{
unsigned int a, b;
for (a = 0; s[a]; a++)
{
for (b = 0; accept[b]; b++)
{
if (s[a] == accept[b])
break;
}
if (accept[b])
return (s + a);
}
return (0);
}
