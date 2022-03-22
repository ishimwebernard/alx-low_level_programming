#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - print every character of a string
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int length = strlen(str);

	_putchar(*str);
	for (i = 0; i < length && length != 0; i++)
	{
		if (i != 0 && i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
