#include <stdio.h>

/**
 * swap_int - swap the values of pointers
 *
 * @a: first value
 * @b: second value
 * Return: Voidint 
 */
void swap_int(int *a, int *b)
{
	int value;

	value = *a;
	*a = *b;
	*b = value;
}
