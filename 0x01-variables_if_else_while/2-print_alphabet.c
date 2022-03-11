#include <stdio.h>

/**
* main - THe entry point of the program
*
* Return: The main function prints the alphabet
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return 0;
}
