/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 15:35:41 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/26 12:32:46 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*return_tab;
	int		i;

	i = 0;
	if (!(return_tab = (int*)malloc((sizeof(int) * length))))
		return (NULL);
	while (i < length)
	{
		return_tab[i] = f(tab[i]);
		i++;
	}
	return (return_tab);
}
