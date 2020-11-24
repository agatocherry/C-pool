/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 15:22:35 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/10 18:34:00 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_is_space(char c)
{
	if (c == '\t' || c == ' ' || c == '\n' || c == '\v'
	|| c == '\f' || c == '\r')
		return (1);
	return (0);
}

int		error(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if ((str[1] == '\0') || (str[0] == '\0'))
		return (1);
	while (str[i])
	{
		if (ft_is_space(str[i]))
			return (1);
		j = 0;
		while (str[j])
		{
			if (str[j] == str[i] && i != j)
				return (1);
			j++;
		}
		if (str[i] == '+' || str[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

int		ft_stop(char c, char *base)
{
	int i;

	i = 0;
	if (c == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		ft_atoi_base_part_two(char *str, char *base, int i, int size_base)
{
	int j;
	int nb;

	j = 0;
	nb = 0;
	while (ft_stop(str[i], base))
	{
		while (base[j])
		{
			if (str[i] == base[j])
				nb = (nb * size_base) + j;
			j++;
		}
		j = 0;
		i++;
	}
	return (nb);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int sign;
	int size_base;
	int nb;

	i = 0;
	sign = 1;
	size_base = 0;
	while (base[size_base])
		size_base++;
	while (ft_is_space(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	nb = ft_atoi_base_part_two(str, base, i, size_base);
	nb = nb * sign;
	return (nb);
}
