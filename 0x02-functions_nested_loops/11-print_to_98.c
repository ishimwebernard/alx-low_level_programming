#include "main.h"
#include <stdio.h>
void custom_print(int n);
void print_negative(int n);
int _abs(int a);
/**
 * print_to_98 - print all natural numbers to 98
 *
 * @n: initial number
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
		for (i = n; i <= 98; i++)
		{
			if (i < 10 && i >= 0)
				_putchar(i + '0');
			else if (i >= 10)
				custom_print(i);
			else
				print_negative(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	else
		for (i = n; i >= 98; i--)
		{
			custom_print(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
}


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
 * print_negative - print negative numbers
 * @n: argument
 * Return: void
 */
void print_negative(int n)
{
	int absolute = _abs(n);

	_putchar('-');
	custom_print(absolute);
}
/**
 * _abs - print absolute value
 * @a: argument
 * Return: return return value
 */
int _abs(int a)
{
	int retval;

	if (a < 0)
		retval = 0 - a;
	else
		retval = a;
	return (retval);
}
