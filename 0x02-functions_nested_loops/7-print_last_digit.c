#include <stdio.h>
#include "main.h"

/**
* print_last_digit - print out the last digit of a number
* @d: argument
* Return: last digit of course
*/
int print_last_digit(int d)
{
	int retval;

	if (d < 0)
		retval = 0 - (d % 10);
	else
		retval = d % 10;
	_putchar(retval + '0');
	return (retval);
}
