
static int ft_strlen(const char *s)
{
    int len = 0;

    while (s[len])
        len++;
    return len;
}
int ft_strlcat(char *dst, const char *src, int dstsize)
{
    int dst_len = ft_strlen(dst);
    int src_len = ft_strlen(src);
    int i = 0;

    if (dstsize <= dst_len)
        return dstsize + src_len;
    while (src[i] && dst_len + i < dstsize - 1)
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return dst_len + src_len;
}
