/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:40:41 by aweaver           #+#    #+#             */
/*   Updated: 2021/11/29 14:46:47 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen(s);
	ret = malloc(sizeof(char) * (len + 1));
	if (ret == 0)
		return (NULL);
	while (i < len && s[i] && (start < s_len))
	{
		ret[i] = s[start + i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}
