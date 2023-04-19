#include "function_pointers.h"

/**
 *print_name - function that prints a name
 *@name: string
 *@f: function to save
 *Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
if (!f || !name)
return;
f(name);
}
