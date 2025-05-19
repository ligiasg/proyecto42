/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisalido <lisalido@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 17:31:18 by lisalido          #+#    #+#             */
/*   Updated: 2025/05/17 17:31:18 by lisalido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	contar_palabras(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	*obtener_palabra(const char *start, size_t len)
{
	char	*palabra;
	size_t	i;

	palabra = malloc(len + 1);
	if (!palabra)
		return (NULL);
	i = 0;
	while (i < len)
	{
		palabra[i] = start[i];
		i++;
	}
	palabra[i] = '\0';
	return (palabra);
}

static void	liberar_array(char **arr, size_t hasta)
{
	while (hasta > 0)
	{
		hasta--;
		free(arr[hasta]);
	}
	free(arr);
}

static int	crear_array_palabras(const char *s, char c, char **res)
{
	size_t		i;
	size_t		j;
	size_t		count;
	const char	*start;

	i = 0;
	j = 0;
	count = contar_palabras(s, c);
	while (j < count)
	{
		while (s[i] == c)
			i++;
		start = &s[i];
		while (s[i] && s[i] != c)
			i++;
		res[j] = obtener_palabra(start, (size_t)(&s[i] - start));
		if (!res[j])
		{
			liberar_array(res, j);
			return (0);
		}
		j++;
	}
	res[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**resultado;
	size_t	palabras;

	if (!s)
		return (NULL);
	palabras = contar_palabras(s, c);
	resultado = malloc(sizeof(char *) * (palabras + 1));
	if (!resultado)
		return (NULL);
	if (!crear_array_palabras(s, c, resultado))
		return (NULL);
	return (resultado);
}
