#include <unistd.h>
void ft_bzero(void *s, size_t n){

    unsigned char *ptr = (unsigned char *)s;

    size_t i = 0;

    while(i < n){

        ptr[i]=0;
        i++;
    }

}



void ft_bzero(void *s, size_t n);

int main(void)
{
    char buffer[6] = "Hola!";

    ft_bzero(buffer, 4);   // Borra los 4 primeros caracteres

    write(1, buffer, 6);   // Verás: "\0\0\0\0!"
    return 0;
}