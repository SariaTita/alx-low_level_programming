#include <stdlib.h>
#include <time.h>
#include <stido.h>
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
Printf(“last digit of %d is and is greater than 5\n”, n);    
}  
else    
{      
If (n ==  0)
{
Printf(“last digit of %d is and is 0\n”, n);	  
}      
else
{	  
Printf(“last digit of %d is and is less  than 6 and not 0\n”, n);	  
}      
return (0);      
}
