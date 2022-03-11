#include <stdio.h>

/*
* main - the entry point of a program
*
* Retrun: Returns letters except the forbidden
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
