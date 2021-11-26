/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:22:28 by aweaver           #+#    #+#             */
/*   Updated: 2021/11/26 12:37:39 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ret = malloc(sizeof(size) * (nmemb));
	if (ret == 0)
		return (0);
	ft_bzero(ret, nmemb);
	return (ret);
}
