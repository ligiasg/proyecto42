/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisalido <lisalido@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:12:13 by lisalido          #+#    #+#             */
/*   Updated: 2025/05/19 10:12:13 by lisalido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*fnueva;

	if (!s || !f)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	fnueva = malloc((len + 1) * sizeof(char));
	if (!fnueva)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		fnueva[i] = f(i, s[i]);
		i++;
	}
	fnueva[i] = '\0';
	return (fnueva);
}
