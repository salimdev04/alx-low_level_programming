#include "main.h"

/**
 * printInteger - Entry point
 * Description: 'printing using _putchar'
 * @num: 'an integer'
 * Return: void
 */
void printInteger(int num)
{
        int i;

        if (num < 0)
        {
                _putchar('-');
                num = -num;
        }
        if (num == 0)
        {
                _putchar('0');
        }
        else
        {
                char digits[10];
                int count = 0;

                while (num > 0)
                {
                        digits[count] = num % 10 + '0';
                        num /= 10;
                        count++;
                }
                for (i = count - 1; i >= 0; i--)
                {
                        _putchar(digits[i]);
                }
        }
}
