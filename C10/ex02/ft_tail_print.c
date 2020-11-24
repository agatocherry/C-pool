/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 14:55:32 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/25 10:34:14 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	tail_print(char *file, int size, int nbr)
{
	int		i;
	int		fd;
	char	c;

	i = 0;
	fd = open(file, O_RDONLY);
	while (read(fd, &c, 1) > 0)
	{
		if (i >= (size - nbr))
		{
			write(1, &c, 1);
		}
		i++;
	}
	close(fd);
}

int		error(char *file, char *program_name)
{
	int fd;

	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		close(fd);
		ft_puterror(basename(program_name));
		ft_puterror(": ");
		ft_puterror(file);
		ft_puterror(": No such file or directory\n");
		return (1);
	}
	close(fd);
	return (0);
}

int		multiple_file(int argc, char *argv, int title)
{
	if (argc > 4)
	{
		if (title > 0)
		{
			ft_putstr("\n");
		}
		ft_putstr("==> ");
		ft_putstr(argv);
		ft_putstr(" <==");
		ft_putstr("\n");
		title++;
	}
	return (title);
}

char	*get_stdin_data(void)
{
	char	*str;
	char	*tmp;
	char	c;
	int		i;

	str = NULL;
	if (!(str = (char*)malloc(sizeof(char) + 1)))
		return (NULL);
	tmp = str;
	while (read(0, &c, 1) > 0)
	{
		i = -1;
		if (!(tmp = malloc((sizeof(char) * (ft_strlen(str) + 1)) + 1)))
			return (NULL);
		while (str[++i])
			tmp[i] = str[i];
		tmp[i] = c;
		tmp[i + 1] = '\0';
		free(str);
		str = tmp;
	}
	return (str);
}
