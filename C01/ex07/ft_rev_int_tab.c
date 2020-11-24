/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 14:22:24 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/17 19:07:51 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int min;
	int max;
	int tmp;

	min = 0;
	max = size;
	while (min < max)
	{
		tmp = tab[min];
		tab[min] = tab[max - 1];
		tab[max - 1] = tmp;
		max--;
		min++;
	}
}
