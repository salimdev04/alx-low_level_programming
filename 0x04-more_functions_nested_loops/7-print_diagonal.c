#include<stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: integer
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			for (j = 0; j <= i; j++)
			{
				_putchar(' ');
			}
		}
	}
	putchar('\n');
}
