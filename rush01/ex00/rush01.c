/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 10:03:44 by mlebrun           #+#    #+#             */
/*   Updated: 2020/08/16 15:37:26 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int		ft_check_views(char *views_str)
{
	int		i;

	i = 0;
	while (views_str[i])
	{
		if (i % 2 == 0)
		{
			if (!((views_str[i] >= '1' && views_str[i] <= '4')))
				return (0);
		}
		else
		{
			if (views_str[i] != ' ')
				return (0);
		}
		i++;
	}
	if (i != 31)
		return (0);
	return (1);
}

int		ft_is_valid(int solution[4][4], int views[4][4], int pos)
{
	if (!ft_is_row_diff(solution) || !ft_is_col_diff(solution)
			|| !ft_is_view_up_correct(solution, views[0], pos)
			|| !ft_is_view_down_correct(solution, views[1], pos)
			|| !ft_is_view_left_correct(solution, views[2], pos)
			|| !ft_is_view_right_correct(solution, views[3], pos))
		return (0);
	return (1);
}

int		ft_find_solution(int solution[4][4], int views[4][4], int pos)
{
	int		i;
	int		x;
	int		y;

	if (pos == 16)
	{
		ft_print_solution(solution);
		return (1);
	}
	i = 1;
	x = pos / 4;
	y = pos % 4;
	while (i <= 4)
	{
		solution[x][y] = i;
		if (ft_is_valid(solution, views, pos))
		{
			if (ft_find_solution(solution, views, pos + 1))
				return (1);
		}
		i++;
	}
	solution[x][y] = 0;
	return (0);
}

int		main(int argc, char **argv)
{
	int		solution[4][4];
	int		views[4][4];

	if (argc != 2 || !ft_check_views(argv[1]))
	{
		ft_putstr("Error\n");
		return (0);
	}
	ft_initialize_solution(solution);
	ft_initialize_views(views, argv[1]);
	if (!ft_find_solution(solution, views, 0))
		ft_putstr("Error\n");
	return (0);
}
