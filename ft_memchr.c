void *ft_memchr(const void *s, int c, unsigned int n)
{
    const unsigned char *ptr = (const unsigned char *)s;
    unsigned int i = 0;

    while (i < n)
    {
        if (ptr[i] == (unsigned char)c)
            return (void *)(ptr + i);
        i++;
    }
    return 0;
}
