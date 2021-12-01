/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:05:37 by aweaver           #+#    #+#             */
/*   Updated: 2021/12/01 11:52:43 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	(void)del;
	size_t	size;
	size_t	i;
	t_list	*ret;

	i = 1;
	size = ft_lstsize(lst);
	ret = ft_lstnew(f(lst->content));
	while (i < size)
	{
		ft_lstadd_back(&ret ,ft_lstnew(f(lst->content)));
		lst++;
		i++;
	}
	return (ret);
}
