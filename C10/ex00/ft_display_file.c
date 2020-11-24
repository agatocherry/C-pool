/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 14:22:53 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/20 09:52:38 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

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

int		error(int argc)
{
	if (argc < 2)
	{
		ft_puterror("File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_puterror("Too many arguments.\n");
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		fd;
	char	c;

	fd = 0;
	if (error(argc))
		return (0);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_puterror("Cannot read file.\n");
		close(fd);
		return (0);
	}
	while (read(fd, &c, 1) > 0)
	{
		ft_putchar(c);
	}
	close(fd);
	return (0);
}
