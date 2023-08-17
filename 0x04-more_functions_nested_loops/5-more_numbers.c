#include<stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * more_numbers - Entry point
 */
void more_numbers(void)
{
	int i, j;

	j = 0;

	while (j < 10)
	{
	for (i = 0; i <= 14; i++)
	{
		if (i < 10)
		{
			_putchar('0' + i);
		}
		else
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
		}
	}
	_putchar('\n');
	j++;
	}
}
