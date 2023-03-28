#include "main.h"
/**
 *print_rev - prints a string, in reverse, followed by a new line
 *@s: the value to process to the stdout in reverse
 */
void print_rev(char *s)
{
int count;
while (*(s + count) != '\n')
{
count++;
}
while (count--)
{
_putchar(*(s + (count)));
}
_putchar('\n');
}
