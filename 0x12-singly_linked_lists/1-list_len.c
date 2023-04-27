#include <stdlib.h>
#include "lists.h"

/**
 *list_len - find the len of a list
 *@h : pointer to a list_t
 *step_through - step through the list
 *Return: the lenth of the list
 */

size_t list_len(const list_t *h)
{
size_t n = 0;
while (h)
{
n++;
h = h->next;
}
return (n);
}
