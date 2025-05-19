/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisalido <lisalido@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:04:42 by lisalido          #+#    #+#             */
/*   Updated: 2025/05/19 10:04:42 by lisalido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*copia;

	if (!s)
		return (NULL);
	len = 0;
	while (s[len] != '\0')
		len++;
	copia = malloc((len + 1) * sizeof(char));
	if (!copia)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		copia[i] = s[i];
		i++;
	}
	copia[i] = '\0';
	return (copia);
}
