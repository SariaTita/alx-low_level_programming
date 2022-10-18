#include "main.h"
/**
* main -  a program that prints _putchar
* putchar function
* return : always 0
*/
int main(void)
{
char *sh = "_putchar";
while (*sh)
{
_putchar(*sh);
sh++;
}
_putchar('\n');
return (0);
}
