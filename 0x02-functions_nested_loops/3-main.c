#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');
    printf("%d", r);
    r = _islower('o');
    printf("%d", r);
    r = _islower(108);
    printf("%d", r);
    putchar('\n');
    return (0);
}
