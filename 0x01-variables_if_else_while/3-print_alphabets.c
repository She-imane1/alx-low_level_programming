#include <stdio.h>
/**
 *main - prints the alphabet in lowercase
 *then in uppercase followed by a new line
 *
 *Return: 0 (success)
 */
int main(void)

{
char M;
for (M = 'a' ; M <= 'z' ; M++)
{
putchar (M);
}
for (M = 'A' ; M <= 'Z' ; M++)
{
putchar (M);
}
putchar('\n');
return (0);
}
