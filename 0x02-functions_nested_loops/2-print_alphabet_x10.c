#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet x10 time use a new line each time.
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
