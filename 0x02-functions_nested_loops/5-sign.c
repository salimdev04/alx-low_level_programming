#include<stdlib.h>
#include<stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_sign - Entry point
 *
 * Description: 'print __putchar'
 * @c: 'an integer'
 *
 * Return: 1 if true and 0 if false
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
