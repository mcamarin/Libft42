/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamarinh@student.42sp.org.br <mcamarin    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 22:55:34 by mcamarinh@s       #+#    #+#             */
/*   Updated: 2021/06/13 19:12:33 by mcamarinh@s      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*dest2;
	unsigned char	*src2;

	if (dest == src || len == 0)
		return (dest);
	if (dest < src)
	{
		dest2 = (unsigned char *)dest;
		src2 = (unsigned char *)src;
		while (len--)
			*dest2++ = *src2++;
	}
	else
	{
		dest2 = (unsigned char *)dest + (len - 1);
		src2 = (unsigned char *)src + (len - 1);
		while (len--)
			*dest2-- = *src2--;
	}
	return (dest);
}
