/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 13:40:21 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/13 18:46:58 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		error(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if ((str[1] == '\0') || (str == 0))
		return (1);
	while (str[i])
	{
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

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long l;
	long size;

	l = nbr;
	size = ft_strlen(base);
	if (error(base))
		return ;
	if (l < 0)
	{
		l = l * -1;
		ft_putchar('-');
	}
	if (l > size - 1)
		ft_putnbr_base(l / size, base);
	ft_putchar(base[l % size]);
}
