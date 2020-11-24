/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 14:40:37 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/06 16:50:11 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int f;
	int n;
	int tmp;

	f = 0;
	n = 1;
	while (f < size - 1)
	{
		if (tab[f] > tab[n])
		{
			tmp = tab[f];
			tab[f] = tab[n];
			tab[n] = tmp;
			f = -1;
			n = 0;
		}
		n++;
		f++;
	}
}
