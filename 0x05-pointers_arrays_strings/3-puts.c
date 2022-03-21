#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string to stream
 * @str: a string to print
 * Return: printed string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
