char *strnstr(const char *s1, const char *s2, size_t len){

    const char *ptr1;
    const char *ptr2;

    ptr1 = s1;
    ptr2 = s2;

    size_t i;
    i = 0;

    if(*ptr2 == '\0'){
        return ptr1;
    }
    size_t j;
    j = 0;
    while (i < len){
        if(ptr1[i] == ptr2[i]){
            return ptr1;
        }
        i++;
    }
    return (NULL);
}