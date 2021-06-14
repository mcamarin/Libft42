/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamarinh@student.42sp.org.br <mcamarin    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 22:19:19 by mcamarinh@s       #+#    #+#             */
/*   Updated: 2021/06/13 19:47:25 by mcamarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_cntword(char const *s, char c)
{
	unsigned int	i;
	int				controle;

	i = 0;
	controle = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			controle++;
		while (s[i] != '\0' && (s[i] != c))
			i++;
	}
	return (controle);
}

static char	*ft_malloc_strncpy(const char *s, size_t n)
{
	char	*str;

	str = (char *)ft_strmalloc(n);
	if (str == NULL)
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**str;

	i = 0;
	k = 0;
	str = (char **)ft_strmalloc(sizeof(char *) * ft_cntword(s, c));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			str[k] = ft_malloc_strncpy(s + j, i - j);
			k++;
		}
	}
	str[k] = NULL;
	return (str);
}
