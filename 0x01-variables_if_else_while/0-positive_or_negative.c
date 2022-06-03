#include < stdlib.h >
#include < time.h >
#include < stdio.h >

/**
*main - Entry point
*generate random no assign to var n
*if no greater tahn 0 output positive
*if no less than 0 output negative
*if no equals 0 output zero
*Return: 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
scanf("%d", &n);
if (n>0)
printf("%d is positive\n", n);
else if (n<0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
return (0);
}
