#include <stdio.h>
#include <string.h>  // Solo para comparar con memcpy del sistema


void *ft_memcpy(void *dest,const void *src, size_t n){
    
    unsigned char *d;
    d = (unsigned char*)dest;
    unsigned const char *s;
    s = (unsigned const char *)src;

    size_t i;

    i = 0;

    while(i < n){

        d[i]=s[i];
        i++;
    }
    return dest;
}



// Declaración de tu función
void *ft_memcpy(void *dest, const void *src, size_t n);

int main(void)
{
    char origen[] = "Hola mundo";
    char destino[20];  // Asegúrate de que tenga espacio suficiente

    // Usamos ft_memcpy para copiar los primeros 5 caracteres
    ft_memcpy(destino, origen, 5);

    // Añadimos un carácter nulo manualmente para poder imprimirlo
    destino[5] = '\0';

    // Mostramos el resultado
    printf("Contenido copiado: %s\n", destino);

    return 0;
}
