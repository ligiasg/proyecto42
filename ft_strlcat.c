size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t dlen = 0;
    char *d = dst;
    while (*d) { dlen++; d++; }

    size_t slen = 0;
    const char *s = src;
    while (*s) { slen++; s++; }

    if (dlen >= dstsize)
        return dstsize + slen;

    size_t espacio = dstsize - 1 - dlen;
    size_t to_copy;
    if (slen < espacio)
        to_copy = slen;
    else
        to_copy = espacio;

    size_t i = 0;
    d = dst + dlen;
    while (i < to_copy) { d[i] = src[i]; i++; }
    d[i] = '\0';

    return dlen + slen;
}
