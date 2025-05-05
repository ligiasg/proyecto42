void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    unsigned char *ptr;

    ptr = (unsigned char *)s;       // 1. Convertimos void * en puntero a byte
    i = 0;

    while (i < n)                   // 2. Recorremos n bytes
    {
        ptr[i] = (unsigned char)c;  // 3. Escribimos el byte
        i++;
    }

    return s;                       // 4. Devolvemos el puntero original
}
