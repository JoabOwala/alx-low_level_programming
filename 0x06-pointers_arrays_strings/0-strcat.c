#include "main.h"

/**
*
*/

char *_strcat(char *dest, char *src)
{
int a,b;
b = 0;
for (a = 0; dest[a]; a++);
while (*(src + b))
{
*(dest + a) = *(src + b);
a++;
b++;
}
return (dest);
}
