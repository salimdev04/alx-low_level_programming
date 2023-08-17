#include<stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - Entry point
 * @c: integer
 * Return: 1 if true and 0 if false
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
