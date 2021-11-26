/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:30:21 by aweaver           #+#    #+#             */
/*   Updated: 2021/11/25 15:32:36 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_strlen_custom(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && ft_is_sep(str[i], charset) == 0)
		i++;
	return (i);
}

static char	*ft_strndup(char *src, int n)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(sizeof(*dest) * (n + 1));
	if (dest == 0)
		return (0);
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

static int	ft_count_words(char *str, char *charset)
{
	int	in_a_word;
	int	count_words;
	int	i;

	i = 0;
	count_words = 0;
	in_a_word = 0;
	while (str[i])
	{
		if (in_a_word == 0 && ft_is_sep(str[i], charset) == 0)
			in_a_word = 1;
		if (in_a_word == 1 && (ft_is_sep(str[i], charset) == 1
				|| str[i + 1] == 0))
		{
			in_a_word = 0;
			count_words++;
		}
		i++;
	}
	return (count_words);
}

char	**ft_split(char const *str, char *charset)
{
	int		i;
	char	**splitted;
	int		word_count;
	int		n;
	int		j;

	i = 0;
	j = 0;
	word_count = ft_count_words(str, charset);
	splitted = malloc(sizeof(*splitted) * (word_count + 1));
	if (splitted == 0)
		return (0);
	splitted[word_count] = 0;
	while (i < word_count)
	{
		while (str[j] && ft_is_sep(str[j], charset))
		{
			j++;
		}	
		n = ft_strlen_custom(&str[j], charset);
		splitted[i] = ft_strndup(&str[j], n);
		j += n;
		i++;
	}
	return (splitted);
}
