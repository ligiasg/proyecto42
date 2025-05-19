/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisalido <lisalido@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:09:38 by lisalido          #+#    #+#             */
/*   Updated: 2025/05/19 10:09:38 by lisalido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	to_copy;
	size_t	i;

	len = 0;
	while (src[len])
		len++;
	if (dstsize == 0)
		return (len);
	if (len < dstsize)
		to_copy = len;
	else
		to_copy = dstsize - 1;
	i = 0;
	while (i < to_copy)
	{
		dst[i] = src[i];
		i++;
	}
	dst[to_copy] = '\0';
	return (len);
}
