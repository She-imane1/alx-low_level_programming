#include <stdio.h>
/**
 *main - prints the alphabet in lowercase
 *except q and e followed by a new line
 *Return: 0(success)
 */
int main(void)
{
char (m);
for (m = 'a' ; m <= 'z' ; m++)
{
if ((m == 'q' || m == 'e') != 1)
{
putchar (m);
}
}
putchar ('\n');
return (0);
