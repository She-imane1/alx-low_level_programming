#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiples 2 numbers
 *@argc: number of arguments
 *@argv: strings
 *Return: 0 (succes) 1 (failure)
 */
int main(int argc, char *argv[])
{
int j, sum = 1;

if (argc != 3)
{
printf("Error\n");
return (1);
}
for (j = 1; j < argc; j++)
sum *= atoi(argv[j]);
printf("%d\n", sum);
return (0);
}
