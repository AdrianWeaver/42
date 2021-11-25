/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:28:35 by aweaver           #+#    #+#             */
/*   Updated: 2021/11/25 14:09:36 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_c;

	i = 0;
	s_c = (unsigned char*)s;
	while (i < n)
	{
		if (s_c[i] == (unsigned char)c)
			return ((void*)s_c + i);
	}
	return (0);
}
