/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 14:52:10 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/25 10:28:28 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puterror(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

void	input(void)
{
	char	c;
	int		i;

	i = 0;
	while (read(0, &c, 1))
	{
		i++;
	}
}

void	ft_putstr(char *str)
{
	int i;

	if (str == NULL)
	{
		return ;
	}
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		read_text(int argc, char **argv)
{
	int		i;
	int		j;
	int		nbr;
	char	*str;

	i = -1;
	j = 0;
	if (argc == 3)
	{
		nbr = tail_argument(argv);
		str = get_stdin_data();
		i = ft_strlen(str);
		while (str[j])
		{
			if (j >= (i - nbr))
				ft_putchar(str[j]);
			j++;
		}
	}
	if (i > 0)
		return (0);
	return (1);
}
