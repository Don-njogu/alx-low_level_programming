#include "main.h"

/**
 * print_last_digit - prints the last digit of a number and returns its value
 * @i: the number to find the last digit of
 *
 * Return: the value of the last digit
 */
int print_last_digit(int i)
{
int k;
k = i % 10;
if (i < 0)
k = -k;
_putchar(k + '0');
return (k);
}
