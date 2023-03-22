#include "main.h"
/**
 *print_alphabet - function writes the alphabet on a line.
 *
 *Return: Always 1;
 */

void print_alphabet()
{
char c;

for (c = 'a' ; c <= 'z' ; c++)
{
_putchar(c);
}
_putchar('\n');
return (1);
}
