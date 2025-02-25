#include <stdlib.h>

static void *ft_memset(void *s, int c, unsigned int n)
{
    unsigned int i = 0;
    unsigned char *ptr = (unsigned char *)s;

    while (i < n)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return s;
}

void *ft_calloc(unsigned int count, unsigned int size)
{
    void *ptr;

    if (!count || !size)
        return malloc(1);
    if ((count * size) / size != count)
        return 0;
    ptr = malloc(count * size);
    if (!ptr)
        return 0;
    return ft_memset(ptr, 0, count * size);
}
