/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamarinh@student.42sp.org.br <mcamarin    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 18:33:56 by mcamarinh@s       #+#    #+#             */
/*   Updated: 2021/06/13 19:12:33 by mcamarinh@s      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t count)
{
	size_t	a;
	char	*segdest;
	char	*segsrc;

	a = 0;
	segdest = (char *)dest;
	segsrc = (char *)src;
	while (a < count)
	{
		segdest[a] = segsrc[a];
		if ((unsigned char)segsrc[a] == (unsigned char)c)
			return ((char *)dest + a + 1);
		a++;
	}
	return (NULL);
}
