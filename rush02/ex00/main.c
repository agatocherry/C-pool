/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 15:06:50 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/23 23:27:46 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		main(int argc, char **argv)
{
	char	**array_str;
	int		k;

	if (argc != 2 && argc != 3)
	{
		ft_putstr("Error\n");
		return (0);
	}
	array_str = parsing(argc, argv);
	if (array_str == NULL)
		return (0);
	search(array_str, argv, argc);
	k = 0;
	while (array_str[k])
	{
		free(array_str[k]);
		k++;
	}
	free(array_str);
	return (0);
}
