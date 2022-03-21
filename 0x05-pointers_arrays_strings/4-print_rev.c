#include <stdio.h>
#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string
 * Return: nothing
 */
void print_rev(char *s)
{
	int length, i;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
		length += 1;
	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
