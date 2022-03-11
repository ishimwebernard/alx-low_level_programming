#include <stdio.h>

/**
* main - the entry point
*
* Return: the list of numbers using putchar
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}

