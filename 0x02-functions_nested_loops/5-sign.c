#include<stdlib.h>
#include<stdio.h>
#include <ctype.h>

/**
 * print_sign - Entry point
 *
 * Description: 'print _putchar'
 * @c: 'an integer'
 *
 * Return: 1 if true and 0 if false
 */
int print_sign(int c)
{
	if (c > 0)
	{
		putchar('+');
		putchar('1');
	}
	else if (c == 0)
	{
		putchar('0');
		putchar('0');
	}
	else
	{
		putchar('-');
		putchar('1');
	}

	return (1);
}
