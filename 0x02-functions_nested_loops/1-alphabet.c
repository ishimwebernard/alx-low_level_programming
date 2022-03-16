#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Return: return success
 * 
 */
void print_alphabet(void)
{
    char i;
    for(i = 'a'; i <= 'z'; i++){
        _putchar(i);
    }
    _putchar('\n');
}