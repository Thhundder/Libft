#include <unistd.h>

static int ft_strlen(const char *s)
{
    int len = 0;

    while (s[len])
        len++;
    return len;
}
void ft_putstr_fd(char *s, int fd)
{
    if (!s)
        return;
    write(fd, s, ft_strlen(s));
}
