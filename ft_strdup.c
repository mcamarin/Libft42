/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamarinh@student.42sp.org.br <mcamarin    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 19:14:24 by mcamarinh@s       #+#    #+#             */
/*   Updated: 2021/06/13 19:12:33 by mcamarinh@s      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = ((char *)malloc(ft_strlen(s1) + 1));
	if (str == NULL)
		return (0);
	ft_memcpy(str, s1, ft_strlen(s1) + 1);
	return (str);
}
