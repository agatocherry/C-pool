/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 16:31:48 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/25 10:28:00 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	int i;

	i = 2;
	if (argc > 1 && argv[1][0] == '-' && argv[1][1] == 'C')
	{
		if (argc < 3)
			i = argc - 1;
		ft_hexdump(argv, argc, i - 1, 0);
	}
	return (0);
}
