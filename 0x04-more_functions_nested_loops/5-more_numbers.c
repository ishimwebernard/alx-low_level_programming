#include "main.h"

void custom_print(int n);
/**
*   more_numbers - print more numbers
*   Return: void
*/
void more_numbers(void)
{
    int i, j;
    
    for (i = 0; i < 11; i++)
    {
        for (j = 0; j < 15; j++)
            custom_print(j);
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
