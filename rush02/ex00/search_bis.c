/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_bis.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 23:22:33 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/23 23:22:56 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void  find_tens_numbers(char *nbr, char **array_str, int pos)
{
	int		word;
	int		i;
	char	*str;

	i = 0;
	word = 0;
	str = NULL;
	while (array_str[word])
	{
		if (array_str[word][0] == nbr[pos] && ft_strlen(array_str[word]) == (ft_strlen(nbr) - pos))
		{
			ft_putstr(array_str[word +1]);
			ft_putchar(' ');
			break ;
		}
		word++;
	}
}

void	find_number_after_tens(char *nbr, char **array_str, int pos)
{
	int		word;
	int		j;
	word = 0;
	while (array_str[word])
	{
		if (nbr[pos] == array_str[word][0] && ft_strlen(array_str[word]) == 1)
		{
			ft_putstr(array_str[word + 1]);
			ft_putchar(' ');
		}
		if (array_str[word][0] == '1' && ft_strlen(array_str[word]) == (ft_strlen(nbr) - pos))
		{
			ft_putstr(array_str[word +1]);
			ft_putchar(' ');
			break ;
		}
		word += 1;
	}
}

char	*check_10_19(char *nbr, char **array_str, int pos)
{
	int		word;
	char	*str;

	word = 0;
	str = NULL;
	while (array_str[word])
	{
		if (array_str[word][0] == nbr[pos] && array_str[word][1] == nbr[pos + 1])
		{
			if (!(str = ft_strdup(array_str[word + 1])))
				return (NULL);
			break ;
		}
		word++;
	} 
	return (str);
}
