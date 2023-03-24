#include "main.h"
/**
 *print_line - draws a straight line
 *@n: the length of the line
 *
 *Return: 0 Always
 */
void print_line(int n)
{
while (!(n <= 0))
{
_putchar('_');
n--;
}
_putchar('\n');
}
