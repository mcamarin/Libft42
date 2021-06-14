/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamarinh@student.42sp.org.br <mcamarin    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 02:22:57 by mcamarinh@s       #+#    #+#             */
/*   Updated: 2021/06/13 20:49:26 by mcamarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		a;
	char	teste;

	a = ft_strlen(s);
	teste = (char)c;
	if (teste == 0)
		return ((char *)s + a);
	while (a >= 0)
	{
		if (s[a] == teste)
			return ((char *)s + a);
		a--;
	}
	return (NULL);
}
