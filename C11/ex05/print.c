/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 19:01:23 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/26 16:33:03 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	if (str == NULL)
	{
		return ;
	}
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	long l;

	l = nb;
	if (l < 0)
	{
		l = l * -1;
		ft_putchar('-');
	}
	if (l > 9)
	{
		ft_putnbr(l / 10);
	}
	ft_putchar('0' + l % 10);
}
