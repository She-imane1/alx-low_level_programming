#include <stdio.h>
/**
 *main - point
 *@argc: number
 *@argv: strings with arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
int j;
for (j = 0; j < argc; j++)
printf("%s\n", argv[j]);
return (0);
}
