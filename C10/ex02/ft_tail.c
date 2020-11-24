/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 09:40:22 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/25 10:21:33 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int		tail_argument(char **argv)
{
	int		nbr;

	nbr = ft_atoi(argv[2]);
	if (nbr < 0)
		nbr *= -1;
	return (nbr);
}

int		tail_size_file(char *file)
{
	int		size;
	int		fd;
	char	c;

	fd = open(file, O_RDONLY);
	size = 0;
	if (fd < 0)
	{
		close(fd);
		return (0);
	}
	while (read(fd, &c, 1) > 0)
	{
		size++;
	}
	close(fd);
	return (size);
}

int		if_error_argc(char **argv, int i)
{
	if (argv[2][i] < '0' || argv[2][i] > '9')
	{
		ft_puterror(basename(argv[0]));
		ft_puterror(": illegal offset -- ");
		ft_puterror(argv[2]);
		ft_puterror("\n");
		return (0);
	}
	return (1);
}

int		error_argc(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc <= 2)
	{
		return (0);
	}
	while (argv[2][i] != '\0')
	{
		if (if_error_argc(argv, i) == 0)
			return (0);
		i++;
	}
	if (read_text(argc, argv) == 0)
		return (0);
	if (argc == 3)
	{
		input();
		return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		nbr;
	int		i;
	int		size;
	int		title;

	i = 3;
	title = 0;
	if (error_argc(argc, argv) == 0)
		return (0);
	nbr = tail_argument(argv);
	while (i < argc)
	{
		if (!error(argv[i], argv[0]))
		{
			size = tail_size_file(argv[i]);
			title = multiple_file(argc, argv[i], title);
			tail_print(argv[i], size, nbr);
		}
		i++;
	}
	return (0);
}
