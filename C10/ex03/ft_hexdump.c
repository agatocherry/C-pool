/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 16:31:36 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/25 10:27:54 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_str_char(char current_line[17])
{
	int i;

	i = 0;
	ft_putstr(" |");
	while (current_line[i])
	{
		if (current_line[i] >= 32 && current_line[i] <= 126)
			ft_putchar(current_line[i]);
		else
			ft_putchar('.');
		i++;
	}
	ft_putstr("|\n");
}

int		print_star(char current[17], char previous[17], int *already)
{
	if (ft_strcmp(current, previous) == 0)
	{
		if (*already == 0)
			ft_putstr("*\n");
		*already = 1;
		return (1);
	}
	return (0);
}

void	print_line(char current[17], char previous[17], int nb, char *base)
{
	static	int	already = 0;
	int			i;
	int			j;

	j = 0;
	i = -1;
	if (print_star(current, previous, &already) == 1)
		return ;
	print_offset(nb, "0123456789abcdef");
	already = 0;
	ft_putstr("  ");
	while (current[++i])
	{
		ft_strcpy(previous, current);
		print_char_hexa(current, i, base);
	}
	while (i < 16)
	{
		ft_putstr("  ");
		if (i < 16)
			ft_putchar(' ');
		if (i++ == 7)
			ft_putchar(' ');
	}
	print_str_char(current);
}

int		open_file(char *filename, int argc, char **argv)
{
	int fd;

	fd = 0;
	if (argc > 2)
	{
		close(fd);
		if ((fd = open(filename, O_DIRECTORY)) > -1)
		{
			close(fd);
			ft_putstr_error(basename(argv[0]));
			ft_putstr_error(": ");
			ft_putstr_error(filename);
			ft_putstr_error(": Is a directory\n");
		}
		if ((fd = open(filename, O_RDONLY)) == -1)
		{
			ft_putstr_error(basename(argv[0]));
			ft_putstr_error(": ");
			ft_putstr_error(filename);
			ft_putstr_error(": No such file or directory\n");
			return (-1);
		}
		return (fd);
	}
	return (0);
}

void	ft_hexdump(char **files, int argc, int i, int k)
{
	char	line[2][17];
	int		fd;
	int		save;
	char	c;

	save = 0;
	fd = 0;
	while (++i < argc)
	{
		if ((fd = open_file(files[i], argc, files)) == -1)
			return ;
		while (read(fd, &c, 1) > 0)
		{
			if (k == 16)
			{
				print_line(line[1], line[0], save, "0123456789abcdef");
				k = 0;
			}
			save++;
			line[1][k++] = c;
		}
		line[1][k] = '\0';
	}
	if (save > 0)
		print_last_offset(save, "0123456789abcdef", line[0], line[1]);
}
