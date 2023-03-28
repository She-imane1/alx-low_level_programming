#include "main.h"
/**
 *swap_int - waps the values of two integers
 *@a: one of the two values to be swapped
 *@b: one of the two values to be swapped
 */
void swap_int(int *a, int *b)
{
int swp;
swp = *a;
*a = *b;
*b = swp;
}
