#include<stdlib.h>
#include<stdio.h>

/**
 * Description: 'print _putchar'
 * Return: void
 */
void print_alphabet_x10(void)
{

	int i = 0;

	while (i < 10)
	{
		for (int w = 'a'; w <= 'z'; w++)
		{
			putchar(w);
		}
		putchar('\n');
		i++;
	}
}
