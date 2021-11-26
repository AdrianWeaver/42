/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 10:03:03 by aweaver           #+#    #+#             */
/*   Updated: 2021/11/26 19:15:14 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_all_str_len(char **strs, int size)
{
	int	i;
	int	j;
	int	all_strs_len;

	i = 0;
	all_strs_len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			all_strs_len += j;
		}
		i++;
	}
	return (all_strs_len);
}

static char	*ft_strcat(char *dest, const char *src)
{
		
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_joined;
	size_t	i;

	str_joined = malloc(sizeof(*str_joined) * (ft_strlen(s1) + ft_strlen(s2)
		+ 1));
	if (str_joined == 0)
		return (0);
	ft_strcat(	
	return (str_joined);
/*	char	*str_joined;
	int		i;
	int		sep_len;

	i = 0;
	sep_len = ft_strlen(sep);
	str_joined = malloc(sizeof(*str_joined) * (ft_all_str_len(strs, size)
				+ ((sep_len * size - 1) + 1)));
	if (size == 0)
		return (str_joined);
	str_joined[0] = 0;
	while (i < size - 1)
	{
		ft_strcat(str_joined, strs[i]);
		ft_strcat(str_joined, sep);
		i++;
	}
	ft_strcat(str_joined, strs[i]);
	return (str_joined);
}*/
