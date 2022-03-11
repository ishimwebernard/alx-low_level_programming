#include <stdio.h>

/**
* main - the entry point
*
* Return: Prints the alphabets in reverse
*/
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
