#include<stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_numbers - Entry point
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
