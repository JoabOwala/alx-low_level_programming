#include "main.h"
#include <ctype.h>

char *string_toupper(char *s)
{
int a;
for (a = 0; s[a]; a++)
{
s[a] = toupper(s[a]);
}
return(s);
}
