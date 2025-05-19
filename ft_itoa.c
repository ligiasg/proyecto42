/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisalido <lisalido@student.42malaga.com>    +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 16:57:47 by lisalido          #+#    #+#             */
/*   Updated: 2025/05/17 16:57:47 by lisalido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	obtener_longitud(int numero)
{
	int		longitud;
	long	num;

	longitud = 0;
	num = numero;
	if (numero <= 0)
	{
		longitud++;
		num = -num;
	}
	while (num != 0)
	{
		num /= 10;
		longitud++;
	}
	return (longitud);
}

char	*ft_itoa(int numero)
{
	int		longitud;
	long	num;
	char	*resultado;

	longitud = obtener_longitud(numero);
	resultado = malloc((longitud + 1) * sizeof(char));
	if (!resultado)
		return (NULL);
	resultado[longitud] = '\0';
	if (numero == 0)
		resultado[0] = '0';
	num = numero;
	if (numero < 0)
	{
		resultado[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		longitud--;
		resultado[longitud] = (num % 10) + '0';
		num /= 10;
	}
	return (resultado);
}
