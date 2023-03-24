#include "main.h"
/**
 *print_numbers - prints numbers from 0 to 9
 *_putchar - writes the character c to stdout
 *
 *Return: 0 Always
 */
void print_numbers(void)
{
int num = 0;

while (num < 10)
{
_putchar('0' + num);
num++;
}
_putchar('\n');
}
