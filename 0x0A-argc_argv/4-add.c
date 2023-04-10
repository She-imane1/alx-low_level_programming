#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - adds positive numbers
 *@argc: number of arguments passed in argv
 *@argv: strings
 *Return: 0 (success) 1 (failure)
 */
int main(int argc, char *argv[])
{
int j, k, sum = 0;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (j = 1; j < argc; j++)
{
for (k = 0; argv[j][k] != '\0'; k++)
{
if (!isdigit(argv[j][k])
{
printf("Error\n");
return (1);
}
}
}
}
sum += atoi(argv[j];
printf("%d\n", sum);
return (0);
}
