#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: 'print  n is positive or negative or zero'
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n > 0)
	{
		printf("%i is positive\n");
	}
	else if(n < 0)
	{
		printf("%i is negative\n");
	}
	else
	{
		printf("%i is zero\n");
	}
	return (0);
}