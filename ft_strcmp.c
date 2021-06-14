/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamarinh@student.42sp.org.br <mcamarin    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 01:49:43 by mcamarinh@s       #+#    #+#             */
/*   Updated: 2021/06/13 02:04:32 by mcamarinh@s      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;
	int	ret;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	ret = ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (ret);
}
