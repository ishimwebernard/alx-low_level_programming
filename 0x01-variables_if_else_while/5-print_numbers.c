#include <stdio.h>

/**
* main - the entry point of the program
*
* Return: Prints out the numbers from 1 to 10
*/
int main(void)
{
	int counter;

	for (counter = 0; counter < 10; counter++)
		printf("%i", counter);
	printf("\n");
	return (0);
}
