/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 09:22:47 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/10 13:31:23 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
