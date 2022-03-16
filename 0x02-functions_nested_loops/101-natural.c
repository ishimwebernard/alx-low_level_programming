#include <stdio.h>
#include "main.h"

void custom_print(int n);
/**
 * main - entry point
 * Return: 1 or zero
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	custom_print(sum);
	_putchar('\n');
	return (0);
}


/**
 * custom_print - Print without libraries
 * @n: number argument
 * Return: Void returner
 */
void custom_print(int n)
{
	int count = 0;
	int number = n;
	int loop, k, j;

	do {
		n /= 10;
		++count;
	} while (n != 0);

	if (count <= 1)
	{
		_putchar(number + '0');
	}
	else
	{
			loop = 10;
		for (k = 2; k < count; k++)
		{
			loop *= 10;
		}
		for (j = (count - 1); j >= 0; j--)
		{
			int temp_number;

			temp_number = number / loop;
			if (temp_number != 0)
			{
				_putchar((temp_number % 10) + '0');
				loop /= 10;
			}
		}
	}
}
