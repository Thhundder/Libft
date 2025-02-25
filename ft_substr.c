#include <stdlib.h>

static int ft_strlen(const char *s)
{
    int len = 0;

    while (s[len])
        len++;
    return len;
}

static void *ft_memcpy(void *dest, const void *src, unsigned int n)
{
    unsigned int i = 0;
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    if (!dest && !src)
        return 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return dest;
}

char *ft_substr(const char *s, unsigned int start, unsigned int len)
{
    char *sub;
    unsigned int s_len;

    if (!s)
        return 0;
    s_len = ft_strlen(s);
    if (start >= s_len)
        return (char *)malloc(1);
    if (len > s_len - start)
        len = s_len - start;
    sub = (char *)malloc(len + 1);
    if (!sub)
        return 0;
    ft_memcpy(sub, s + start, len);
    sub[len] = '\0';
    return sub;
}
