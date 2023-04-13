#include <stdlib.h>

/**
 *create_array - creates an array of a spacific size and fill with a char
 *@size: the Size of the array to make
 *@c: characture to fill the array with
 *Return: An array of charactures
 */
char *create_array(unsigned int size, char c)

{
unsigned int i;
char *az;

if (size <= 0)
return (0);
az = malloc(size);
if (az == 0)
return (0);
i = 0;
while (i < size)
{
az[i] = c;
i++;
}
return (az);
}

