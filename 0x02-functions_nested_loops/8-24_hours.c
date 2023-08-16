#include<stdlib.h>
#include<stdio.h>
#include "main.h"

/**
 * handle_putchar - Entry point
 * Description: printing
 * @h0: hours 0
 * @h1: hours 1
 * @min0: minut 0
 * @min1: minut 1
 * Return: void
 */
void handle_putchar(int h0, int h1, int min0, int min1)
{
	_putchar('0' + h0);
	_putchar('0' + h1);
	_putchar(':');
	_putchar('0' + min0);
	_putchar('0' + min1);
	_putchar('\n');
}

/**
 * jack_bauer - Entry point
 * Description: 'print _putchar'
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
					handle_putchar(hour_1, hour_0, minut_1, minut_0);

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
