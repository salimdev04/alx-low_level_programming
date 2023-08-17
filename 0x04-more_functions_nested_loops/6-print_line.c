#include<stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_line - Entry point
 * @n: integer
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	}
	putchar('\n');
}
