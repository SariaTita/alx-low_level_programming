#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*if ..else
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("last digit of %d is %ld and is greater than 5\n", n, n);
}
else
{
if (n ==  0)
{
printf("last digit of %d is %ld and is 0\n", n, n);
}
else
{
printf("last digit of %d is %ld and is less than 6 and not 0\n", n, n);
}
}
return (0);
}
