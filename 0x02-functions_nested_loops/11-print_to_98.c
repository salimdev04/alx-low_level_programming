#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "main.h"

/**
 * printInteger - Entry point
 * Description: 'printing using _putchar'
 * @num: 'an integer'
 * Return: void
 */
void printInteger(int num)
{
	int i;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num == 0)
	{
		_putchar('0');
	}
	else
	{
		char digits[10];
		int count = 0;

		while (num > 0)
		{
			digits[count] = num % 10 + '0';
			num /= 10;
			count++;
		}
		for (i = count - 1; i >= 0; i--)
		{
			_putchar(digits[i]);
		}
	}
}

/**
 * print_to_98 - Entry point
 *
 * Description: 'print __putchar'
 * @a: 'an integer'
 * Return: 1 if true and 0 if false
 */
void print_to_98(int a)
{
	int i;

	if (a < 98)
	{
		for (i = a; i <= 98; i++)
		{
			printInteger(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = a; i >= 98; i--)
		{
			printInteger(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
