#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * @size: size of a triangle
 * Return: triangle of '#'s
 */
void print_triangle(int size)
{
	int sp, ro;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (ro = 0; ro <= (size - 1); ro++)
	{
	for (sp = 0; sp < (size - 1) - ro; sp++)
	{
	_putchar(' ');
	}
	_putchar('\n');
	}
	}
}

