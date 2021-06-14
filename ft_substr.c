/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamarinh@student.42sp.org.br <mcamarin    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 20:10:01 by mcamarinh@s       #+#    #+#             */
/*   Updated: 2021/06/13 21:19:43 by mcamarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len2;
	size_t	len3;
	char	*sstr;

	len3 = ft_strlen(s + start);
	if (len3 < len)
		len = len3;
	len2 = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	sstr = (char *)malloc(sizeof(char) * (len + 1));
	if (sstr == NULL)
		return (NULL);
	while (len2 < len)
	{
		sstr[len2] = s[start + len2];
		len2++;
	}
	sstr[len2] = '\0';
	return (sstr);
}
