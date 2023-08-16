#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "main.h"

void printInteger(int num) {
	int i;

    if (num < 0) {
        putchar('-');
        num = -num;
    }

    if (num == 0) {
        putchar('0');
    } else {
        char digits[10];
        int count = 0;

        while (num > 0) {
            digits[count] = num % 10 + '0';
            num /= 10;
            count++;
        }

        for (i = count - 1; i >= 0; i--) {
            putchar(digits[i]);
        }
    }
    if (num < 98)
    {
	putchar(',');
	putchar(' ');
	}
}

/**
 * print_to_98 - Entry point
 *
 * Description: 'print _putchar'
 * @a: 'an integer'
 * Return: 1 if true and 0 if false
 */
void print_to_98(int a)
{
	int i;
	
	if (a < 98)
	{
		for (i = a; i <= 98; i++)
		{
			printInteger(i);
		}
	}
	else
	{
		for (i = a; i >= 98; i--)
		{
			printInteger(i);
		}
	}
	putchar('\n');
}
