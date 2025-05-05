

void *ft_memchr(const void *s,int c,size_t n){

    unsigned char *ptr;
    ptr = (const unsigned char*) s;

    size_t i;
    i = 0;

    while(i < n){
        
        if(ptr[i] == (unsigned char)c){
            return ((void *)&ptr[i]);


        i++;
      
    }}

    return (NULL);

    }