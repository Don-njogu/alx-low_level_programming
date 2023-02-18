#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a';
// Print lowercase letters
while (letter <= 'z')
{
putchar(letter);
letter++;
}
letter = 'A';
// Print uppercase letters
while (letter <= 'Z')
{
putchar(letter);
letter++;
}
putchar('\n');
return 0;
}
