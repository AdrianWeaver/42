/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:10:55 by aweaver           #+#    #+#             */
/*   Updated: 2021/11/24 12:15:00 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (litte[i] == 0)
		return (big);
	if (len == 0)
		return (0);
	while (big[i])
	{
		j = 0;
		while (big[i] == little[j])
		{
			if (j == len || little[j + 1] == 0)
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (0);
}
