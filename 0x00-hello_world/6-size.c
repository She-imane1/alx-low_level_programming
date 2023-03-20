#include <stdio.h>
/**
 *main - prints various types of computer
 *
 *Return: Always 0 (Succes)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf(" size of a char : %lu byte($)\n ", (unsigned long)sizeof(a));
printf("size of an int : %lu byte($)\n", (unsigned long)sizeof(b));
printf("size of a long int : %lu byte($)\n", (unsigned long)sizeof(c));
printf("size of a long long int : %lu byte($)\n", (unsigned long)sizeof(d));
printf("size of a a float : %lu byte($)\n", (unsigned long)sizeof(f));
return (0);
}

