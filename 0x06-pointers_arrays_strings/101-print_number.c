#include "main.h"
#include <stdio.h>

/**
 * print_number - print an integer using only _putchar
 * @n: integer to print
 */

void print_number(int n)
{
	unsigned int num;

/* check if number is negative */
	num = n;
	if (n < 0)
	{
		_putchar(45);
		num = -n;
	}
/* print number by recursion */
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
