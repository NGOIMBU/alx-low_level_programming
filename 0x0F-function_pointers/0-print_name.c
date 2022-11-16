#include "function_pointers.h"

/**
*print_name - prints a name
*@name: name to print
*
*Return: void
*/
void print_name(char *name, void (*f)(char *));
{
printf("Hello, this is my %s/n", name);
}
