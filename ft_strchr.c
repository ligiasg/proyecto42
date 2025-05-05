/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisalido <lisalido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 11:30:32 by lisalido          #+#    #+#             */
/*   Updated: 2025/05/05 12:06:07 by lisalido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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