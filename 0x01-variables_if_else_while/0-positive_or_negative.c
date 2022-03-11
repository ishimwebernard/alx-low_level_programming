#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/*
 *This program is used to generate some random number
 *Description: The program uses srand to generate random numbers
 *which uses if statements to verify if it is positive or negative
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
	printf("%i is negative\n", n);
else if (n > 0)
	printf("%i is positive\n", n);
else
	printf("%i is zero\n", n);
return (0);
}
