/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamarinh@student.42sp.org.br <mcamarin    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 19:52:48 by mcamarinh@s       #+#    #+#             */
/*   Updated: 2021/06/13 19:48:48 by mcamarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*strcat;

	len1 = 0;
	len2 = 0;
	strcat = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (strcat == NULL)
		return (NULL);
	while (s1[len1] != '\0')
	{
		strcat[len1] = s1[len1];
		len1++;
	}
	while (s2[len2] != '\0')
	{
		strcat[len1 + len2] = s2[len2];
		len2++;
	}
	strcat[len1 + len2] = '\0';
	return (strcat);
}
