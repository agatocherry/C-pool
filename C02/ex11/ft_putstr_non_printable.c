/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 13:56:22 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/09 09:44:04 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hexa_base(int nb)
{
	char *base;

	base = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(base[nb / 16]);
	ft_putchar(base[nb % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < ' ' || str[i] > '~')
			hexa_base(str[i]);
		else
			ft_putchar(str[i]);
	}
}
