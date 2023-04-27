#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_list - print the contents of a list
 *@h: pointer lio list
 *Return: number of elementsin a list
 */

size_t print_list(const list_t *h)
{
size_t n_nodes;
if (!h)
return (0);
do {
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
n_nodes++;
} while (h);
return (n_nodes);
}
