#include <unistd.h>

int main(void)
{
    char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    size_t len = sizeof(str) - 1;

    ssize_t bytes_written = write(STDOUT_FILENO, str, len);

    if (bytes_written != len)
    {
        return (0);
    }

    return (1);
}
