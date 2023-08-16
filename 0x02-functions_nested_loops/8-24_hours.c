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
 * jack_bauer - Entry point
 *
 * Description: 'print _putchar'
 *
 * Return: 1 if true and 0 if false
 */
void jack_bauer(void)
{
	int hour_0, hour_1, minut_0, minut_1;
	hour_0 = 0;
	hour_1 = 0;
	minut_0 = 0;
	minut_1 = 0;

	while (hour_1 <= 2)
	{
		while (hour_0 <= 9)
		{
			while (minut_1 <= 5)
			{
				while (minut_0 <= 9)
				{
					_putchar('0' + hour_1);
					_putchar('0' + hour_0);
					_putchar(':');
					_putchar('0' + minut_1);
					_putchar('0' + minut_0);
					_putchar('\n');

					if (hour_1 == 2 && hour_0 == 3 && minut_1 == 5 && minut_0 == 9)
					{
						exit(0);
					}

					minut_0++;
				}
				minut_1++;
				minut_0 = 0;
			}
			hour_0++;
			minut_1 = 0;
			minut_0 = 0;
		}
		hour_1++;
		hour_0 = 0;
		minut_1 = 0;
		minut_0 = 0;
	}
}
