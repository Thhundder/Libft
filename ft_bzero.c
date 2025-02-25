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


void ft_bzero(void *s, unsigned int n)
{
    ft_memset(s, 0, n);
}
