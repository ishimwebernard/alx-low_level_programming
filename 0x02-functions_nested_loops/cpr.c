#include "main.h"

void custom_print(int n)
{
	int count = 0;
	int number = n;
	int i, k, j;
	
	do {
		n /= 10;
		++count;
	} while (n != 0);

		int loop = 10;
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
