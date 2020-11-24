/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 09:19:02 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/10 09:19:05 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
