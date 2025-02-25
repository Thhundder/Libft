void *ft_memset(void *s, int c, unsigned int n)
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
