#include <stdio.h>
#include "main.h"
/**
* puts2 - prints every other character of a  string to stdout
* @str: string to print
*
* Return: void
*/
void puts2(char *str)
{
int i, len = 0;
while (str[i++])
len++;
for (i = 0; i < len; i += 2)
_putchar(str[i]);
_putchar('\n');
}
