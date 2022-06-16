#include "main.h"
#include <ctype.h>

char *cap_string(char *s)
{
int a;
for (a = 0; s[a]; a++)
{
if(s[a] == ',' || s[a] == ';' || s[a] == '.' || s[a] == ' ' || s[a] == '!' || s[a] == '?' || s[a] == '?' || s[a] =='"' || s[a] == '(' || s[a] == ')' || s[a] == '{' || s [a] == '}')
{
s[a + a] = toupper(s[a + 1]);
}
}
return(s);
}
