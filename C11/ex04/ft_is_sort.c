/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 17:25:43 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/26 13:22:53 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		ascending;
	int		descending;

	ascending = 0;
	descending = 0;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			ascending++;
		if (f(tab[i], tab[i + 1]) >= 0)
			descending++;
		i++;
	}
	if (ascending == i || descending == i)
		return (1);
	return (0);
}
