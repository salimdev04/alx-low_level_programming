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
		if (number/10 < number%10)
		{
			putchar('0' + number/10);
			putchar('0' + number%10);
			putchar(',');
			putchar(' ');
		}
		
	}
	putchar('\n');
	return (0);
}
