#include <unistd.h>
#include "main.h"
/**
* main - entry point
* putchar function
* return : always 0
*/
int _putchar(char c)
{
return (write(1, &c, 1));  
}
int main(void)
{
_putchar();
return (0);
}
