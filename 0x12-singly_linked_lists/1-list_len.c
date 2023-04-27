#include "lists.h"

size_t step_through(const list_t *h)

/**
 *list_len - find the len of a list
 *@h : pointer to a list_t
 *step_through - step through the list
 *Return: the lenth of the list
 */

size_t list_len(const list_t *h)
{
if (!h)
return (0);
/* assuming that since the list isn not null there is */
/* one else to account for */

if (!h->next)
return (1);
return (1 + step_through(h));
}
/**
 *step_through - step through the list
 *@h: a pointer to a list
 *Return: a count for every step through the list
 */

size_t step_through(const list_t *h)
{
if (!h->next)
return (0);
return (1 + step_through(h->next));
}
