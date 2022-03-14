#include <stdio.h>
/**
* main - entry point
* Return: Always 0 (Failure)
*/
int main(void)
{
	syscall(__NR_write,1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19",6);
	return (1);
}
