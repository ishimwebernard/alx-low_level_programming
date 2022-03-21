#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - print half of the string
 * @str: string to print
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int length = strlen(str);

	if (length % 2 != 0)
	{
		for (i = ((length - 1) / 2); i < length; i++)
			_putchar(str[i]);
	}
	else
		for (i = (length / 2); i < length; i++)
			_putchar(str[i]);
	_putchar('\n');
}
