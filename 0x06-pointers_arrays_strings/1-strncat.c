#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
int a , b;
b = 0;
for (a = 0; dest[a]; a++);
while (*(src + b))
{
while(b < n)
{
*(dest +a) = *(src + b);
b++;
}
b++;
}
return (dest);
}
