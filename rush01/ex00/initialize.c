/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 15:30:24 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/15 15:59:49 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_initialize_solution(int solution[4][4])
{
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			solution[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	ft_initialize_views(int views[4][4], char *values)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (values[i])
	{
		if (i % 2 == 0)
		{
			views[j][k] = values[i] - 48;
			k++;
			if (k == 4)
			{
				j++;
				k = 0;
			}
		}
		i++;
	}
}
