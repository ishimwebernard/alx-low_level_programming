#include <stdio.h>
#include "main.h"
/**
* main - entry point
* Return: returns 0 always success
*/
int main(void)
{
	char putch[8] = "_putchar";
	int i;
	for(i = 0; i < 8; i++)
	{
		_putchar(putch[i]);
	}
	_putchar('\n');
	return (0);
}
