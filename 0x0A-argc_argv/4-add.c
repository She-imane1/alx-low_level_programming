#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 *check_num - adds positive numbers
 *@str: strings
 *Return: 0 (success) 1 (failure)
 */
int check_num(char *str)
{
unsigned int count;
count = 0;
while (count < strlen(str))
{
if (isdigit(str[count]))
{
return (0);
}
count++;
}
return (1);
}
unsigned int count;
unsigned int str_to_int;
unsigned int sum = 0;
count = 1;
while (count < argc)
{
if (check_num(argv[count]))
{
str_to_int = atoi(argv[count]);
sum += str_to_int;
}
else
{
printf("Error\n");
return (1);
}
count++;
}
printf("%d\n", sum);
return (0);
}
