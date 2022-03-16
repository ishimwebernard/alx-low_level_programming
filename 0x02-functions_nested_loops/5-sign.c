#include <stdio.h>
#include "main.h"

/**
* print_sign - checks the sign of an input
* @n: integer to check what
* Return: 1,0 or +,-
*/
int print_sign(int n)
{
	int retval;

	if (n > 0)
	{
		_putchar('+');
		retval = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		retval = 0;
	}
	else if (n < 0)
	{
		retval = -1;
		_putchar('-');
	}
	return (retval);

}
