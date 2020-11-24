/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 12:21:09 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/13 12:33:45 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int size;
	int *tab;
	int i;

	i = 0;
	size = max - min;
	tab = NULL;
	if (max <= min)
		return (NULL);
	tab = (int*)malloc(size * sizeof(int));
	if (tab == NULL)
		return (NULL);
	while (i < size)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
