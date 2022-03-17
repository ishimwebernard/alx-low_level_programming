#include "main.h"

/**
 *  print_line - print a line
 * 
 * @n: NUmber of times to print -
 */
void print_line(int n)
{
    int i;

    for (i = 1; i <= n; i++)
        _putchar('_');
    _putchar('\n');
}