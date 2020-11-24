/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 17:53:41 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/25 10:21:25 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <libgen.h>

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

int		error(char *argv, int fd, char *program_name)
{
	int		directory;

	if (fd < 0)
	{
		ft_puterror(basename(program_name));
		ft_puterror(": ");
		ft_puterror(argv);
		ft_puterror(": No such file or directory\n");
		return (1);
	}
	directory = open(argv, O_DIRECTORY);
	if (directory != -1)
	{
		ft_puterror(basename(program_name));
		ft_puterror(": ");
		ft_puterror(argv);
		ft_puterror(": Is a directory\n");
		return (1);
	}
	close(directory);
	return (0);
}

int		file(int argc, char **argv)
{
	int		i;
	int		fd;
	char	c;

	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (error(argv[i], fd, argv[0]))
			close(fd);
		else
		{
			while (read(fd, &c, 1) > 0)
			{
				write(1, &c, 1);
			}
			close(fd);
		}
		i++;
	}
	return (0);
}

void	read_stdin(void)
{
	char c;

	while (read(0, &c, 1))
	{
		write(1, &c, 1);
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		file(argc, argv);
	}
	else
		read_stdin();
	return (0);
}
