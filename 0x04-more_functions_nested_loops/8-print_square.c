#include "main.h"
/**
 *print_square - prints a square, followed by a new line.
 *@size: the size of the square
 *
 *Return: 0 Always
 */
void print_square(int size)
{
int vert, horiz;

if (size <= 0)
{
_putchar('\n');
return;
}

for (vert = size ; vert > 0 ; vert--)
{
for (horiz = size ; horiz > 0 ; horiz--)
{
_putchar('#');
}
_putchar('\n');
}
}
