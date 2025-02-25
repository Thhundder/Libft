char *ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
    unsigned int i = 0;
    unsigned int j = 0;

    if (!*needle)
        return (char *)haystack;
    while (haystack[i] && i < len)
    {
        j = 0;
        while (haystack[i + j] == needle[j] && i + j < len)
        {
            if (!needle[j + 1])
                return (char *)(haystack + i);
            j++;
        }
        i++;
    }
    return 0;
}
