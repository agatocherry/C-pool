/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_views_correct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 15:34:16 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/15 15:59:48 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_view_up_correct(int solution[4][4], int views[4], int pos)
{
	int		count;
	int		max;
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		count = 0;
		max = 0;
		while (j < 4)
		{
			if (solution[j][i] > max)
			{
				max = solution[j][i];
				count++;
			}
			j++;
		}
		if (pos % 4 == i && pos / 4 == 3 && count != views[i])
			return (0);
		i++;
	}
	return (1);
}

int		ft_is_view_down_correct(int solution[4][4], int views[4], int pos)
{
	int		count;
	int		max;
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 3;
		count = 0;
		max = 0;
		while (j >= 0)
		{
			if (solution[j][i] > max)
			{
				max = solution[j][i];
				count++;
			}
			j--;
		}
		if (pos % 4 == i && pos / 4 == 3 && count != views[i])
			return (0);
		i++;
	}
	return (1);
}

int		ft_is_view_left_correct(int solution[4][4], int views[4], int pos)
{
	int		count;
	int		max;
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		count = 0;
		max = 0;
		while (j < 4)
		{
			if (solution[i][j] > max)
			{
				max = solution[i][j];
				count++;
			}
			j++;
		}
		if (pos / 4 == i && pos % 4 == 3 && count != views[i])
			return (0);
		i++;
	}
	return (1);
}

int		ft_is_view_right_correct(int solution[4][4], int views[4], int pos)
{
	int		count;
	int		max;
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 3;
		count = 0;
		max = 0;
		while (j >= 0)
		{
			if (solution[i][j] > max)
			{
				max = solution[i][j];
				count++;
			}
			j--;
		}
		if (pos / 4 == i && pos % 4 == 3 && count != views[i])
			return (0);
		i++;
	}
	return (1);
}
