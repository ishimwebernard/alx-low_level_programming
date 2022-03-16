#include <stdio.h>
#include "main.h"
void custom_print(int n);
int count_digits(int cd);
/**
* print_times_table - print the 9 timetable
* @n: argument
* Return: void
*
*/
void print_times_table(int n)
{
	int i, j, k, temp;

	if (n < 15 && n > 0)
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			temp = 4 - count_digits((i * j));
			for (k = 0; k < temp; k++)
				if (j != 0)
					_putchar(' ');
			custom_print((i * j));
			if (j != n && n != 0)
				_putchar(',');
		}
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar(n + '0');
		_putchar('\n');
	}
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

/**
 * count_digits - count digs
 * @cd: arg
 * Return: nmbr
 */
int count_digits(int cd)
{
	int count = 0;

	do {
		cd /= 10;
		++count;
	} while (cd != 0);
	return (count);
}
