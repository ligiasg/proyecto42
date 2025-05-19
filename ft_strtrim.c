/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisalido <lisalido@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:14:51 by lisalido          #+#    #+#             */
/*   Updated: 2025/05/19 10:14:51 by lisalido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	obtener_inicio(char const *s1, char const *set)
{
	size_t	inicio;
	size_t	j;
	size_t	encontrado;

	inicio = 0;
	encontrado = 1;
	while (s1[inicio] && encontrado == 1)
	{
		encontrado = 0;
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[inicio] == set[j])
				encontrado = 1;
			j++;
		}
		if (encontrado == 1)
			inicio++;
	}
	return (inicio);
}

static size_t	obtener_final(char const *s1, char const *set, size_t inicio)
{
	size_t	final;
	size_t	j;
	size_t	encontrado;

	final = 0;
	while (s1[final] != '\0')
		final++;
	encontrado = 1;
	while (final > inicio && encontrado == 1)
	{
		encontrado = 0;
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[final - 1] == set[j])
				encontrado = 1;
			j++;
		}
		if (encontrado == 1)
			final--;
	}
	return (final);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	inicio;
	size_t	final;
	size_t	nuevo_tam;
	char	*resultado;

	if (!s1 || !set)
		return (NULL);
	inicio = obtener_inicio(s1, set);
	final = obtener_final(s1, set, inicio);
	nuevo_tam = final - inicio + 1;
	resultado = (char *)malloc(nuevo_tam * sizeof(char));
	if (!resultado)
		return (NULL);
	i = 0;
	while (inicio + i < final)
	{
		resultado[i] = s1[inicio + i];
		i++;
	}
	resultado[i] = '\0';
	return (resultado);
}
