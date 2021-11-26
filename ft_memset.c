/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:43:35 by aweaver           #+#    #+#             */
/*   Updated: 2021/11/26 12:18:37 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (n--)
	{
		*((unsigned char *)s + i) = c;
		i++;
	}
	return (s);
}

/*
#include <stdio.h>
int	main(int ac, char** av)
{
	(void)ac;
	(void)av;
	size_t	n;
	int		i;

	i = 0;
	n = 2;
	char s1[]="toto"; 
	char s2[]="toto";

	ft_memset(s1, 'a', n);
	memset(s2, 97, n);
	printf("yes\n");
	while (s2[i])
	{
		printf("%c\n", s2[i]);
		i++;
	}
}
*/
