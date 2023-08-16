#include<stdlib.h>
#include<stdio.h>

/**
 * main - Entry point
 * Description: 'print _putchar'
 * Return: Always 0
 */
int main(void)
{
	char word[] = "_putchar";
	int w;

	for (w = 0; w < 8; w++)
	{
		putchar(word[w]);
	}
	putchar('\n');
	return (0);
}
