#include "main.h"

void print_alphabet(void);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    print_alphabet();
    return (0);
}

/**
 * print_alphabet - Prints the lowercase alphabet
 */
void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }

    putchar('\n');
}

