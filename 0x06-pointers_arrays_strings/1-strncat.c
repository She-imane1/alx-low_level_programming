#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: the string that will modified
 * @src: the string that ill be concatenated to @dest
 * @n: copy up to poistion 'n'
 * Return: a pointer to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
int in_1 = 0;
int in_2 = 0;

while (dest[in_1] != '\0')
{
in_1++;
}

while (in_2 < n && src[in_2] != '\0')
{
dest[in_1 + in_2] = src[in_2];
in_2++;

}
dest[in_1 + in_2] = '\0';

return (dest);
}
