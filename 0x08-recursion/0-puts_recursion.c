#include "main.h"
/**
 *_puts_recursion - function that prints a string followed by a new line
 *@s: string to print
 *Return: 0
 */
void _puts_recursion(char *s)
{
if (!*s)
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion((s + 1));
}
