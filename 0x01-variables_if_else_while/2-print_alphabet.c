#include<stdlib.h>
#include<stdio.h>

/**
 * main - Entry point
 * Description: 'print alphabet in c'
 * Return: Always 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
