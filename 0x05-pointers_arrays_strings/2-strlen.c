#include <stdio.h>

/**
 * _strlen - Determine length of a string
 * @s: array character
 * Return: integer
 */
int _strlen(char *s)
{
	int size, i;

	size = 0;
	for (i = 0; s[i] != '\0'; i++)
		size += 1;
	return size;
}
