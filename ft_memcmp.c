/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamarinh@student.42sp.org.br <mcamarin    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 01:39:21 by mcamarinh@s       #+#    #+#             */
/*   Updated: 2021/06/13 19:12:33 by mcamarinh@s      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	a;
	char	*ss1;
	char	*ss2;

	a = 0;
	ss1 = (char *)s1;
	ss2 = (char *)s2;
	while (n--)
	{
		if (ss1[a] != ss2[a])
			return ((unsigned char)ss1[a] - (unsigned char)ss2[a]);
		a++;
	}
	return (0);
}
