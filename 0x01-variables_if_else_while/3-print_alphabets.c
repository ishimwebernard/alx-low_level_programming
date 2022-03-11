#include <stdio.h>

/**
* main - THe entry point of the program
*
* Return: The main function prints the alphabet
*/
int main(void)
{
	int ch, sec;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (sec = 'A'; sec <= 'Z'; sec++)
	{
		putchar(sec);
	}
	putchar('\n');
	return (0);
}
