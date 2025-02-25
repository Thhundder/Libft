#include <stdlib.h>

static int ft_strlen(const char *s)
{
    int len = 0;

    while (s[len])
        len++;
    return len;
}


char *ft_strdup(const char *s)
{
    char *dup;
    unsigned int i = 0;
    unsigned int len = ft_strlen(s);

    dup = (char *)malloc(len + 1);
    if (!dup)
        return 0;
    while (s[i])
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = '\0';
    return dup;
}
