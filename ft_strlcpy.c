size_t ft_strlcpy(char *dst,const char *src,size_t dstsize){
    //hay que tener en cuenta los bytes del dstsize.
    // calculamos la longitud de src
    size_t len;
    len = 0;
    const char *s;
    s = src;

    while(*s != '\0'){
        len++;
        s++;
    }
  

    if(dstsize == 0){
        return len;
    }

    size_t to_copy;
    

    if(len < dstsize){
        to_copy = len;
    }else{
        to_copy = dstsize-1;
    }

    size_t i;
    i = 0;
    while(i < to_copy){
        dst[i]= src[i];
        i++;
    }
    dst[to_copy]='\0';

return len;
}