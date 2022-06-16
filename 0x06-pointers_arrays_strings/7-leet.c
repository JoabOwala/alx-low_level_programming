#include "main.h"

char *leet(char *s)
{
int a,b;
char l[] = "AaEeOoTtLl";
char n[] = "4433007711";

for(a = 0; s[a] ; a++)
{
for (b = 0; l[b] ; b++)
{
if(s[a] == l[b])
{
s[a] = n[b];
}
}
}
return (s);
}
