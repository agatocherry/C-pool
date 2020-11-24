/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 12:47:48 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/05 14:49:34 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		ft_putchar(str[c]);
		c++;
	}
}

void	ft_print_comb_second(int c, int d, int u)
{
	while (c < 10)
	{
		while (d < 10)
		{
			while (u < 10)
			{
				if (c < d && d < u)
				{
					ft_putchar('0' + c);
					ft_putchar('0' + d);
					ft_putchar('0' + u);
					if (c == 7 && d == 8 && u == 9)
					{
						break ;
					}
					ft_putstr(", ");
				}
				u++;
			}
			u = 0;
			d++;
		}
		d = 0;
		c++;
	}
}

void	ft_print_comb(void)
{
	int u;
	int c;
	int d;

	u = 0;
	d = 0;
	c = 0;
	ft_print_comb_second(c, d, u);
}
