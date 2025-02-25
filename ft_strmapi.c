#include <stdlib.h>

static int ft_strlen(const char *s)
{
    int len = 0;

    while (s[len])
        len++;
    return len;
}

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    char *new_str;
    unsigned int i = 0;
    unsigned int len;

    if (!s || !f)
        return 0;
    len = ft_strlen(s);
    new_str = (char *)malloc(len + 1);
    if (!new_str)
        return 0;
    while (i < len)
    {
        new_str[i] = f(i, s[i]);
        i++;
    }
    new_str[i] = '\0';
    return new_str;
}
