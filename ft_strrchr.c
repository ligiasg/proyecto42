/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisalido <lisalido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:07:12 by lisalido          #+#    #+#             */
/*   Updated: 2025/05/05 12:33:30 by lisalido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strrchr(const char * s , int c ){
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
