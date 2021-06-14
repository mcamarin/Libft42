/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamarinh@student.42sp.org.br <mcamarin    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 02:43:17 by mcamarinh@s       #+#    #+#             */
/*   Updated: 2021/06/13 20:57:53 by mcamarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	while (a < n && s1[a] != '\0')
	{
		b = 0;
		while (a + b < n && s1[a + b] == s2[b] && s2 [b] != '\0')
			b++;
		if (s2[b] == '\0')
			return ((char *)s1 + a);
		a++;
	}
	return (NULL);
}
