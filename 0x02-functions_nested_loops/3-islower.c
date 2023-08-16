#include<stdlib.h>
#include<stdio.h>
#include <ctype.h>

/**
 * _islower - Entry point
 *
 * Description: 'print _putchar'
 * @c: 'an integer'
 *
 * Return: 1 if true and 0 if false
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
