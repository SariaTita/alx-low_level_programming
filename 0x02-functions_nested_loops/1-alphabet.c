#include "main.h"
/**
* main - entry point
* a function that prints the alphabet, in lowercase
* return : always 0
*/
void print_alphabet(void)
{
int n;
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
_putchar('\n');
}
