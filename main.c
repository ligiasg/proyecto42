#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char    ejemplo_mapi(unsigned int i, char c)
{
    return (c + i);
}

void    ejemplo_iteri(unsigned int i, char *c)
{
    *c = *c + i;
}

int main(void)
{
    char s1[100] = "hola mundo";
    char s2[100] = "hola mundo";
    char buffer[50];

    printf("ft_isalpha('A') = %d\n", ft_isalpha('A'));
    printf("ft_isdigit('4') = %d\n", ft_isdigit('4'));
    printf("ft_isalnum('Z') = %d\n", ft_isalnum('Z'));
    printf("ft_isascii(127) = %d\n", ft_isascii(127));
    printf("ft_isprint(' ') = %d\n", ft_isprint(' '));
    printf("ft_strlen(\"hola\") = %zu\n", ft_strlen("hola"));

    ft_memset(buffer, 'X', 5);
    buffer[5] = '\0';
    printf("ft_memset -> %s\n", buffer);

    char bzero_test[10] = "123456789";
    ft_bzero(bzero_test, 5);
    printf("ft_bzero -> %s\n", bzero_test + 5);

    ft_memcpy(s1, "1234", 4);
    printf("ft_memcpy -> %s\n", s1);

    ft_memmove(s2, s2 + 1, 5);
    printf("ft_memmove -> %s\n", s2);

    char dst[20];
    ft_strlcpy(dst, "hola", 20);
    printf("ft_strlcpy -> %s\n", dst);

    ft_strlcat(dst, " mundo", 20);
    printf("ft_strlcat -> %s\n", dst);

    printf("ft_toupper('a') = %c\n", ft_toupper('a'));
    printf("ft_tolower('A') = %c\n", ft_tolower('A'));

    printf("ft_strchr(\"hola\", 'l') = %s\n", ft_strchr("hola", 'l'));
    printf("ft_strrchr(\"hola\", 'l') = %s\n", ft_strrchr("hola", 'l'));

    printf("ft_strncmp(\"abc\", \"abd\", 2) = %d\n", ft_strncmp("abc", "abd", 2));

    printf("ft_memchr(\"abcdef\", 'd', 6) = %s\n", (char *)ft_memchr("abcdef", 'd', 6));
    printf("ft_memcmp(\"abc\", \"abd\", 2) = %d\n", ft_memcmp("abc", "abd", 2));
    printf("ft_strnstr(\"hola mundo\", \"mun\", 10) = %s\n", ft_strnstr("hola mundo", "mun", 10));
    printf("ft_atoi(\"  \t -42\") = %d\n", ft_atoi("  \t -42"));

    char *p = ft_calloc(5, sizeof(char));
    if (p)
    {
        printf("ft_calloc (5 bytes): OK\n");
        free(p);
    }

    char *dup = ft_strdup("duplicado");
    printf("ft_strdup -> %s\n", dup);
    free(dup);

    char *sub = ft_substr("Hola mundo", 5, 5);
    printf("ft_substr -> %s\n", sub);
    free(sub);

    char *joined = ft_strjoin("Hola", "42");
    printf("ft_strjoin -> %s\n", joined);
    free(joined);

    char *trimmed = ft_strtrim("   42hola   ", " ");
    printf("ft_strtrim -> %s\n", trimmed);
    free(trimmed);

    char **split = ft_split("Hola a todos", ' ');
    if (split)
    {
        for (int i = 0; split[i]; i++)
        {
            printf("ft_split[%d] -> %s\n", i, split[i]);
            free(split[i]);
        }
        free(split);
    }

    char *itoa = ft_itoa(-1234);
    printf("ft_itoa(-1234) -> %s\n", itoa);
    free(itoa);

    char *mapped = ft_strmapi("abcd", ejemplo_mapi);
    printf("ft_strmapi -> %s\n", mapped);
    free(mapped);

    char test_iteri[] = "abcd";
    ft_striteri(test_iteri, ejemplo_iteri);
    printf("ft_striteri -> %s\n", test_iteri);

    ft_putchar_fd('X', 1);
    write(1, "\n", 1);
    ft_putstr_fd("Hola mundo\n", 1);
    ft_putendl_fd("Fin de línea", 1);
    ft_putnbr_fd(12345, 1);
    write(1, "\n", 1);

    return (0);
}
