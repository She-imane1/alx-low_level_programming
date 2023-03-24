#include "main.h"
/**
 *print_diagonal - draws a diagonal line of the terminal
 *@n: of times the character \ should be printed
 *
 *Return: 0 Always
 */
void print_diagonal(int n)
{
if (n == 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0 ; i < n ; j++)
{
if (j == i)
_putchar('\\');
else if (j < i)
_putchar('\');
}
}
}
