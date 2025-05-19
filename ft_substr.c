/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisalido <lisalido@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:16:35 by lisalido          #+#    #+#             */
/*   Updated: 2025/05/19 10:16:35 by lisalido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_len;
	size_t	i;
	char	*str_dup;

	if (!s)
		return (NULL);
	str_len = 0;
	while (s[str_len] != '\0')
		str_len++;
	if (start >= str_len)
		return (malloc(1));
	if (len > str_len - start)
		len = str_len - start;
	str_dup = malloc((len + 1) * sizeof(char));
	if (!str_dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str_dup[i] = s[start + i];
		i++;
	}
	str_dup[i] = '\0';
	return (str_dup);
}
