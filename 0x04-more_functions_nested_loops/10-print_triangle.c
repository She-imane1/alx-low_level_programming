#include "main.h"
/**
 *print_triangle - prints a triangle, followed by a new line.
 *@size: the size of the triangle
 *
 *Return: 0 Always
 */
void print_triangle(int size);

{
int i, margin, dis, to_print;
if (size <= 0)
{
_putchar('\n');
return;
}

dis = size - 1;
for (i = 0 ; i < size ; i++)
{

margin = 0;
while (margin < (dis - i))
{
_putchar(32);
margin++;
}

to_print = size - margin;

while (to_print > 0)
{
_putchar('#');
to_print--;
}
_putchar('\n');
}
}
