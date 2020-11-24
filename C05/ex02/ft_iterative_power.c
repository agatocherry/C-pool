/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 10:41:32 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/12 14:19:29 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;

	i = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		i *= nb;
		power--;
	}
	return (i);
}
