/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 12:43:25 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/18 09:34:39 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int *tab;
	int i;

	i = 0;
	size = max - min;
	tab = NULL;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	tab = (int*)malloc(size * sizeof(int));
	if (tab == NULL)
		return (-1);
	while (i < size)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (size);
}
