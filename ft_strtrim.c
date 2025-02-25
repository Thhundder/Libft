#include <stdlib.h>

static int ft_strlen(const char *s)
{
    int len = 0;

    while (s[len])
        len++;
    return len;
}

static char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char)c)
            return (char *)s;
        s++;
    }
    if ((char)c == '\0')
        return (char *)s;
    return 0;
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

char *ft_strtrim(const char *s1, const char *set)
{
    unsigned int start = 0;
    unsigned int end;
    char *trim;

    if (!s1 || !set)
        return 0;
    end = ft_strlen(s1);
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;
    trim = (char *)malloc(end - start + 1);
    if (!trim)
        return 0;
    ft_memcpy(trim, s1 + start, end - start);
    trim[end - start] = '\0';
    return trim;
}
