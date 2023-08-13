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

	for (number = 0; number < 100; number++)
	{
		int first_digit = number / 10;
		int last_digit = number % 10;

		if (first_digit < last_digit)
		{
			putchar('0' + first_digit);
			putchar('0' + last_digit);
			if (number < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
