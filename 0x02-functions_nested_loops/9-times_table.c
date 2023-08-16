#include<stdlib.h>
#include<stdio.h>
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
 * times_table - Entry point
 *
 * Description: 'print _putchar'
 *
 * Return: 1 if true and 0 if false
 */
void times_table(void)
{
	int i;
	int j = 0;

	while (j < 10)
	{
		for (i = 0; i < 10; i++)
		{
			int times = j * i;

			printInteger(times);
			if (i != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (times >= 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
		j++;
	}
}
