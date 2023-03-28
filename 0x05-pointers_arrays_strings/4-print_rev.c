#include "main.h"
/**
 *print_rev - prints a string, in reverse, followed by a new line
 *@s: the value to process to the stdout in reverse
 */
void print_rev(char *s)
{
int co;
while (*(s + co) != '\n')
{
co++;
}
while (co--)
{
_putchar(*(s + (co)));
}
_putchar('\n');
}
