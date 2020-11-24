/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 16:31:44 by agcolas           #+#    #+#             */
/*   Updated: 2020/11/19 02:34:59 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_char_hexa(char current_line[17], int i, char *base)
{
	ft_putchar(base[current_line[i] / 16]);
	ft_putchar(base[current_line[i] % 16]);
	if (i < 16)
		ft_putchar(' ');
	if (i == 7)
		ft_putchar(' ');
}

void	print_last_offset(int nb, char *base,
					char previous[17], char current[17])
{
	char	addr[9];
	int		i;

	addr[0] = '\0';
	i = 0;
	print_line(current, previous, nb, "0123456789abcdef");
	while (nb > 0)
	{
		addr[i] = base[nb % 16];
		nb = nb / 16;
		i++;
	}
	addr[8] = '\0';
	while (i < 8)
	{
		addr[i] = '0';
		i++;
	}
	i = 7;
	while (i >= 0)
	{
		ft_putchar(addr[i]);
		i--;
	}
	ft_putchar('\n');
}

void	print_offset(int nb, char *base)
{
	char	addr[9];
	int		i;

	addr[0] = '\0';
	i = 0;
	nb = nb % 16 == 0 ? nb - 16 : nb - nb % 16;
	while (nb > 0)
	{
		addr[i] = base[nb % 16];
		nb = nb / 16;
		i++;
	}
	addr[8] = '\0';
	while (i < 8)
	{
		addr[i] = '0';
		i++;
	}
	i = 8;
	while (--i >= 0)
		ft_putchar(addr[i]);
}
