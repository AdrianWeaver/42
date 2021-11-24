/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:28:35 by aweaver           #+#    #+#             */
/*   Updated: 2021/11/24 10:37:58 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*mmemchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((unsigned char *)s[i]);
	}
	return (0);
}
