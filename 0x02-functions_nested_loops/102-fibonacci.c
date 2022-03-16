#include "main.h"
#include <stdio.h>
void custom_print(int n);

int main(void)
{
	int first, last, i;
	unsigned long long sum;

	first = 1;
	last = 2;

	sum = 0;
	printf("1, 2, ");
	for (i = 0; i < 50; i++)
	{
		sum = first + last;
		printf("%llu", sum);
		first = last;
		last = sum;
		if (i != 49)
		{
		printf(", ");
		}
	}
	printf("\n");
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
