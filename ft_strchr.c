/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamarinh@student.42sp.org.br <mcamarin    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 02:11:12 by mcamarinh@s       #+#    #+#             */
/*   Updated: 2021/06/13 20:34:47 by mcamarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		a;
	char	find;

	a = 0;
	find = (unsigned char)c;
	while (s[a] != '\0')
	{
		if (s[a] == find)
			return ((char *)s + a);
		a++;
	}
	if (s[a] == find)
		return ((char *)s + a);
	return (NULL);
}
