#include <stdio.h>

/**
 * _strcpy - copy a string into another
 * @src: source string
 * @dest: destination string
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, length;

	length = 0;
	for (i = 0; src[i] != '\0'; i++)
	{
		*(dest + i) = *(src + i);
		length += 1;
	}
	return (dest);
}
