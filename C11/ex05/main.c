/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihauet <dihauet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 17:39:09 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/26 17:01:51 by dihauet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		ft_is_space(char c)
{
	if (c == '\t' || c == ' ' || c == '\n' || c == '\v'
	|| c == '\f' || c == '\r')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int nb;
	int sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (ft_is_space(str[i]))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		nb = nb * 10;
		nb = nb + (str[i] - '0');
		i++;
	}
	nb = nb * sign;
	return (nb);
}

int		ft_error(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	if (argv[2][0] == '/' && argv[3][0] == '0')
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	if (argv[2][0] == '%' && argv[3][0] == '0')
	{
		ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		nbr_ret;
	int		nbr_left;
	int		nbr_right;

	nbr_ret = 0;
	if (ft_error(argc, argv) == 1)
		return (0);
	nbr_left = ft_atoi(argv[1]);
	nbr_right = ft_atoi(argv[3]);
	if (argv[2][0] == '+' && argv[2][1] == '\0')
		nbr_ret = g_calculate[0](nbr_left, nbr_right);
	if (argv[2][0] == '-' && argv[2][1] == '\0')
		nbr_ret = g_calculate[1](nbr_left, nbr_right);
	if (argv[2][0] == '/' && argv[2][1] == '\0')
		nbr_ret = g_calculate[2](nbr_left, nbr_right);
	if (argv[2][0] == '*' && argv[2][1] == '\0')
		nbr_ret = g_calculate[3](nbr_left, nbr_right);
	if (argv[2][0] == '%' && argv[2][1] == '\0')
		nbr_ret = g_calculate[4](nbr_left, nbr_right);

	ft_putnbr(nbr_ret);
	ft_putchar('\n');
	return (0);
}
