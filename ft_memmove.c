/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:20:39 by aweaver           #+#    #+#             */
/*   Updated: 2021/11/24 09:17:59 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	if ((unsigned long)&dest > (unsigned long)&src)
	{
		while (n)
		{
			dest[n] = src[n];
			n--;
		}
	}
	else
	{
		while (n)
		{
			dest[i] = src[i];
			n--;
		}
		return (dest);
	}
}
