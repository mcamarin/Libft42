/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamarinh@student.42sp.org.br <mcamarin    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 00:03:39 by mcamarinh@s       #+#    #+#             */
/*   Updated: 2021/06/13 19:42:32 by mcamarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_char_position_counter(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
	{
		i++;
		n = (-1) * n;
	}
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_char_position_counter(n);
	s = ft_strmalloc(i);
	if (s == NULL)
		return (NULL);
	s[i] = '\0';
	if (n < 0)
	{
		n *= -1;
		s[0] = '-';
	}
	while (n > 9)
	{
		s[i - 1] = n % 10 + '0';
		n /= 10;
		i--;
	}
	s[i - 1] = n + '0';
	return (s);
}
