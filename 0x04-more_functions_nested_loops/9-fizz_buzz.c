#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fizz_buzz[] = "FizzBuzz";
	int i, c;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			for (c = 0; c < 4; c++)
			{
				putchar(fizz[c]);
			}
			putchar(' ');
		}
		else if (i % 5 == 0)
                {
                        for (c = 0; c < 4; c++)
                        {
                                putchar(buzz[c]);
                        }
			putchar(' ');
                }
		else if (i % 3 == 0 && i % 5 == 0)
                {
                        for (c = 0; c < 8; c++)
                        {
                                putchar(fizz_buzz[c]);
                        }
			putchar(' ');
                }
		else
		{
			if ( i >= 10)
			{
				putchar('0' + i / 10);
			}
			putchar('0' + i % 10);
			putchar(' ');
		}
	}

	return (0);
}
