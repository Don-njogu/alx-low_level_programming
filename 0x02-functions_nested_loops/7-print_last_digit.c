#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number and returns its value
 * @num: the number to find the last digit of
 *
 * Return: the value of the last digit
 */
int print_last_digit(int num)
{
int last_digit = num % 10;
printf("The last digit of %d is %d\n", num, last_digit);
return (last_digit);
}
