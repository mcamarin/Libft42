/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamarinh@student.42sp.org.br <mcamarin    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 02:14:54 by mcamarinh@s       #+#    #+#             */
/*   Updated: 2021/06/13 19:43:05 by mcamarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	a;
	int	negativo;
	int	resultado;

	a = 0;
	negativo = 0;
	resultado = 0;
	while (str[a] != '\0' && (str[a] == 32 || str[a] == '\n' || str[a] == '\t' \
			|| str[a] == '\r' || str[a] == '\f' || str[a] == '\v' ))
		a++;
	if (str[a] != '\0' && str[a] == '-')
	{
		negativo = 1;
		a++;
	}
	else if (str[a] == '+')
		a++;
	while (str[a] != '\0' && (str[a] >= 48 && str[a] <= 57))
	{
		resultado = (resultado * 10) + (str[a] - '0');
		a++;
	}
	if (negativo == 1)
		return (-resultado);
	return (resultado);
}
