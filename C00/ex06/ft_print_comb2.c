/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 14:44:26 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/06 09:37:14 by agcolas          ###   ########.fr       */
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
		ft_putnbr(nb / 10);
	}
	ft_putchar('0' + nb % 10);
}

void	ft_print_comb2_2(int l, int r)
{
	if (l < 10)
	{
		ft_putchar('0');
	}
	ft_putnbr(l);
	ft_putchar(' ');
	if (r < 10)
	{
		ft_putchar('0');
	}
	ft_putnbr(r);
}

void	ft_print_comb2(void)
{
	int l;
	int r;

	l = 0;
	r = 0;
	while (l < 100)
	{
		while (r < 100)
		{
			if (l < r)
			{
				ft_print_comb2_2(l, r);
				if (l == 98 && r == 99)
				{
					break ;
				}
				ft_putchar(',');
				ft_putchar(' ');
			}
			r++;
		}
		r = 0;
		l++;
	}
}
