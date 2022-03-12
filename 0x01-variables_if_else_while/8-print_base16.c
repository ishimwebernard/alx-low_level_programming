#include <stdio.h>

/**
* main - the doc of the entry point
*
* Return: SHows the hexadecimal numbers
*/
int main(void)
{
	int counter, ch;

	for (counter = 0; counter < 10; counter++)
		putchar(counter + '0');
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
