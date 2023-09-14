#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The value to determine the size of the times table.
 */
void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
int i, j, result;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
result = i * j;
if (j == 0)
printf("%d", result);
else
printf(", %3d", result);
}
printf("\n");
}
}
}
int main(void)
{
int n;
printf("Enter a number between 0 and 15: ");
scanf("%d", &n);
print_times_table(n);
return (0);
}
