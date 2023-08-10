#include <unistd.h>

/*
 * main - Entry point
 * Description: 'print string using write function'
 * Return: Always 1 if success
 */
int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
size_t len = sizeof(str) - 1;
write(STDOUT_FILENO, str, len);
return (1);
}
