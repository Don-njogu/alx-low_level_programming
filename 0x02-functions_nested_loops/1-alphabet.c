#include <stdio.h>

/**
 * print_alphabet - prints the lowercase alphabet, followed by a newline
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

/**
 * main - calls the print_alphabet function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    print_alphabet();
    return (0);
}

