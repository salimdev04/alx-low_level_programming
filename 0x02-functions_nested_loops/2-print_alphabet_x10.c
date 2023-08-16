#include<stdlib.h>
#include<stdio.h>

/**
 * print_alphabet_x10 - Entry point
 * Description: 'print _putchar'
 * Return: void
 */
void print_alphabet_x10(void)
{

	int i = 0;

	while (i < 10)
	{
		int y;

		for (y = 'a'; y <= 'z'; y++)
		{
			putchar(y);
		}
		putchar('\n');
		i++;
	}
}
