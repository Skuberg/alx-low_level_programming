#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet x10 use a new line for each alphabet.
 * Return: void
 */
void print_alphabet_x10(void)
{
char c;
int i = 0;
while (i <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
i++;
}
_putchar('\n');
}
