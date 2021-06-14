/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamarinh@student.42sp.org.br <mcamarin    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 18:06:43 by mcamarinh@s       #+#    #+#             */
/*   Updated: 2021/06/13 20:03:43 by mcamarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	if (n == 0)
		return (0);
	while ((s1[a] || s2[a]) && s1[a] == s2[a] && (a < n - 1))
	{
		if (s1[a] < s2[a])
		{
			return (-1);
		}
		else if (s1[a] > s2[a])
		{
			return (1);
		}
		a++;
	}
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}
