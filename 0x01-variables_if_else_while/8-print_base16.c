#include <stdio.h>
/**
 *main - prints all the numbers of base 16 in lowercase followed by a new line
 *Return: 0 (success)
 */
int main(void)
{
char n;

for (n = 0 ; n < 16 ; n++)
{
if (n < 10)
{
putchar('0' + n);
}
else
{
putchar(87 + n);
}
}
putchar('\n');
return (0);
}
