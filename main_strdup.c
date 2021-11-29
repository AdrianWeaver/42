/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:48:07 by aweaver           #+#    #+#             */
/*   Updated: 2021/11/26 14:58:40 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	main(int ac, char **av)
{
	if (ac < 2)
		return (0);
	printf("%s\n", ft_strndup(av[1], 10));
	return (0);
}
