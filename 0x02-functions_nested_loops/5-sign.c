#include "main.h"
/**
 * print_sign - function that prints signs
 * @c: function parameter
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
_putchar(',');
_putchar(' ');
return (1);
}
else if (n == 0)
{
_putchar('0');
_putchar(',');
_putchar(' ');
return (0);
}
else
{
_putchar('-');
_putchar(',');
_putchar(' ');
return (-1);
}
}
