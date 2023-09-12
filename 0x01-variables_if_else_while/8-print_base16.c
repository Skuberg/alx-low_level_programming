#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: Prints all hexadecimal numbers in lowercase followed by a newline.
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int d;
c = 'a';
d = 0;
while
(d < 10)
{
putchar(d + '0');
d++;
}
while
(c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
