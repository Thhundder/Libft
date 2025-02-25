void *ft_memcpy(void *dest, const void *src, unsigned int n)
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
