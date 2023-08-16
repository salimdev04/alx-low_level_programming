#include<stdlib.h>
#include<stdio.h>

/**
 * print_alphabet - Entry point
 * Description: 'print _putchar'
 * Return: void
 */
void print_alphabet(void)
{
	int w;

	for (w = 'a'; w <= 'z'; w++)
	{
		putchar(w);
	}
	putchar('\n');
}
