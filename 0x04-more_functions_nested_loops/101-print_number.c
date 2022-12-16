#include “main.h”
#include <stdio.h>
/**
* Print_number – prints int with putchar
*on: takes number, hello
*
* Return:void
*/

void print_number(int n)
{
    unsigned int m;
    if (n < o)
{
    putchar('-');
    m = -n;
}
else
{
    m = n;
}
if (m /10 != 0)
print_number(m / 10);
}
