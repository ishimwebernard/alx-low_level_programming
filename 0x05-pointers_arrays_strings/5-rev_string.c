#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: string
 * Return: Void
 */

void rev_string(char *s)
{
	int i;
	int length = strlen(s);

	for (i = length - 1; i >= 0; i--)
		printf("%c",*(s + i));
	printf("\n");
}
