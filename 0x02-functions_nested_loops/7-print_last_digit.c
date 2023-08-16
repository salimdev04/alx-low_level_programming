#include<stdlib.h>
#include<stdio.h>
#include <math.h>

/**
 * print_last_digit - Entry point
 *
 * Description: 'print _putchar'
 * @c: 'an integer'
 *
 * Return: 1 if true and 0 if false
 */
int print_last_digit(int c)
{
	int last_digit = c % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}
