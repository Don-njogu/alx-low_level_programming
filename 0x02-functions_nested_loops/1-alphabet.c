#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet
 *
 *Return: Always 0 (Success)
 */
void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        _putchar(letter);
        letter++;
    }

    _putchar('\n');
}

