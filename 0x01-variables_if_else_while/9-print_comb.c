#include<stdlib.h>
#include<stdio.h>

/**
 * main - Entry point
 * Description: 'print number in c'
 * Return: Always 0
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar('0' + number);
		putchar(", ");
	}
	putchar('\n');
	return (0);
}
