char *ft_strrchr(const char * s , int c ){
    char *ptr;
    ptr = (char *)s;

    while(*ptr){
      ptr++;
    }

    while(ptr >= s){

        if(*ptr == c){
            return ptr;
        }
        ptr--;
    }
 

        return (NULL);
    }