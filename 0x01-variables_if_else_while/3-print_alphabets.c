#include <stdio.h>
int main() {
char letter = 'a';
// Print lowercase letters
while (letter <= 'z') {
putchar(letter);
letter++;
}
letter = 'A';
// Print uppercase letters
while (letter <= 'Z') {
putchar(letter);
letter++;
}
putchar('\n');
return 0;
}
