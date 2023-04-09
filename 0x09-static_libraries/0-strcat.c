#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: string will be modified
 *@src: string that will be concatenated to @dest
 *Return: a pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
int in_1 = 0;
int in_2 = 0;
while (dest[in_1] != '\0')
{
in_1++;
}
while (src[in_2] != '\0')
{
dest[in_1 + in_2] = src[in_2];
in_2++;
}
dest[in_1 + in_2] = '\0';
return (dest);
}
