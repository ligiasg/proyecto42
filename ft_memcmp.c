int ft_memcmp(const void *s1,const void *s2,size_t n){
    const unsigned char *ptr1;
    const unsigned char *ptr2;

    ptr1= (const unsigned char*)s1;
    ptr2=(const unsigned char *)s2;

    size_t i;
    i = 0;

    while(i < n){
        
        if(ptr1[i] < ptr2[i]){
             return -1
        }else if(ptr1[i] > ptr2[i]){
            return (1);
        }
    i++;
    }

    return (0);
}