/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 15:41:49 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/22 15:42:09 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		ft_is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		++i;
	}
	return (0);
}

int		ft_calculate_words(char *str, char *charset)
{
	int		i;
	int		nb_words;
	int		is_word;

	is_word = 0;
	nb_words = 0;
	i = 0;
	while (str[i])
	{
		if (is_word == 0 && !(ft_is_separator(str[i], charset)))
		{
			nb_words++;
			is_word = 1;
		}
		if (ft_is_separator(str[i], charset))
		{
			i += 1;
			is_word = 0;
		}
		else
			i++;
	}
	return (nb_words);
}

int		ft_calculate_size_words(char *str, char *charset)
{
	int		i;
	int		nb_char;
	int		is_word;

	is_word = 0;
	nb_char = 0;
	i = 0;
	while (str[i])
	{
		if (!(ft_is_separator(str[i], charset)))
			nb_char++;
		else
		{
			return (nb_char);
		}
		i++;
	}
	return (nb_char);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		word;
	int		array_char;
	int		nb_char;
	char	**arrays;

	i = 0;
	word = -1;
	if (!(arrays =
	(char**)malloc((sizeof(char*) * ft_calculate_words(str, charset)) + 1)))
		return (NULL);
	while (++word < ft_calculate_words(str, charset))
	{
		while (ft_is_separator(str[i], charset))
			i += 1;
		array_char = -1;
		nb_char = ft_calculate_size_words(&(str[i]), charset);
		if (!(arrays[word] = (char*)malloc((sizeof(char) * nb_char) + 1)))
			return (NULL);
		while (++array_char < nb_char)
			arrays[word][array_char] = str[i++];
		arrays[word][array_char] = '\0';
	}
	arrays[word] = NULL;
	return (arrays);
}
