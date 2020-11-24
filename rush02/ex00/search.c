/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 15:55:37 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/23 23:32:39 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	*find_value(char **array_str, char *str)
{
	int i;

	i = 0;
	while (array_str[i]){
		if (ft_strcmp(array_str[i], str) == 0)
			return array_str[i + 1];
		i += 2;
	}
	return(NULL);
}

char	*get_numbs(char **array_str, int size)
{
	int i;

	i = 0;
	if (size % 2 == 1)
		size--;
	while(array_str[i])
	{
		if (array_str[i][0] == '1' && ft_strlen(array_str[i]) == size )
			return array_str[i + 1];
		i+= 2;
	}
	return (NULL);
}

void	print(char *nbr, int size, char **array_str)
{
	char str[4];
	int i;
	char *nb;
	i = 0;
	while (i < size )
	{
		str[i] = nbr[i];
		i++;
	}
	str[i] = '\0';
	nb = find_value(array_str,str);
	i = 0;
	if (!nb)
	{
		while (str[i])
		{
			find_tens_numbers(str,array_str,i);
			i++;
		}
	}
	if (nb)
	{
		ft_putstr(nb);
		ft_putchar(' ');
	}
	ft_putstr(get_numbs(array_str, ft_strlen(nbr) - (ft_strlen(str) - 1 )));
	ft_putchar(' ');
}

int		search_1(char **array_str, char *nbr, int argc)
{
	int		pos;
	int		size;

	size = ft_strlen(nbr);
	pos = 0;
	while (size > 0)
	{
		if (ft_strlen(&nbr[pos]) == 2 && nbr[pos] == '1')
		{
			ft_putstr(check_10_19(nbr, array_str, pos));
			break ;
		}
		if (size < 3)
		{
			if (nbr[pos] != '0' || (nbr[pos] == '0' && ft_strlen(nbr) == 1))
			find_tens_numbers(nbr, array_str, pos);
		}
		if (size >= 3 && nbr[pos] != '0')
		{
			if (size % 3 != 0)
			{
				print(nbr, size % 3, array_str);
				pos =  pos + (size % 3 - 1);
				size = size - (size % 3 - 1);
			}
			else
				find_number_after_tens(nbr, array_str, pos);
		}
		pos++;
		size--;
	}
	return(0);
}

int		search(char **array_str, char **argv, int argc)
{
	if (search_1(array_str, argv[2] ? argv[2] : argv[1], argc) == 1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (0);
}
