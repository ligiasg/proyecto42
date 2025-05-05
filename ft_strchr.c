char *strchr(const char *s,int c){
    
    char *ptr;
    ptr = (char *)s;

    while(*ptr){

        if(ptr == c){
            return ptr;
        }
        *ptr++;
    }

    if(c == '\0'){
        return ptr;
    }else{

        return (NULL);
    }

}