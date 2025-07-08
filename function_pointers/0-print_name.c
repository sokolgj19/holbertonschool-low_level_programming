#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - calls a function on a name
 * @name: the name to print
 * @f: function pointer to a print function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
    {
        f(name);
    }
}
