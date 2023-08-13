#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: 'last digit for a number'
 * Return: Always 0
 */
int main(void)
{
	int n, l_nbr;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l_nbr = n % 10;
	if (l_nbr > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l_nbr);
	}
	else if (l_nbr == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l_nbr);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_nbr);
	}
	return (0);
}
