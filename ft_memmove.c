void *memmove(void *dest, const void *src,size_t n){
    
    //primero vamos a castear para convertirlo en char e ir byte por byte
    unsigned char *d;
    d = (unsigned char *)dest;

    const unsigned  char *s;
    s = (const unsigned char *)src;

    size_t i;
    i = 0;

    //para que no se solapen hay que comprobar si el destino es mayor a src o no para leer de
    //izq a dercha o de drch a izq

    if(d < s){

        while(i < n){

            d[i]= s[i];
            i++;
        }
        return dest;

    }else if(d >= s){
        while(n > 0){
            n--;
            d[n]= s[n];
            
        }
        return dest;
    }


}