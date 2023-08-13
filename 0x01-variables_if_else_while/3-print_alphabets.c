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

	for (alphabet =  'a'; alphabet <= 'z'; alphabet++)
	{
		char upperAlphabet = alphabet - ('a' - 'A');
		putchar(alphabet);
		putchar(upperAlphabet);
	}
	putchar('\n');
	return (0);
}
