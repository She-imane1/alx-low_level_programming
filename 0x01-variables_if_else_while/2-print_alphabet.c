#include <stdio.h>
/**
 *main -  prints the alphabet in lowercase and  in uppercase
 *followed by a new line
 *
 *Return: 0 (success)
 */
int main(void)
{
char m;

for (m = 'a' ; m <= 'z' ; m++)
{
putchar (m);
}
putchar ('\n');
return (0);
}
