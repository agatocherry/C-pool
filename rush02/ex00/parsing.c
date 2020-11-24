/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 15:35:37 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/23 23:30:52 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	*ft_dict(char *file)
{
	int		fd;
	char	c;
	char	*str;
	char	*tmp;
	int		i;

	str = NULL;
	fd = open(file, O_RDONLY);
	if (!(str = (char*)malloc(sizeof(char) + 1)))
		return (NULL);
	tmp = str;
	while (read(fd, &c, 1) > 0)
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
	close(fd);
	return (str);
}

char	**parsing(int argc, char **argv)
{
	char	*str;
	char	**array_str;
	int		i;

	i = 0;
	if (argc == 2)
	{
		if (!(str = ft_dict("numbers.dict")))
		{
			ft_putstr("Error\n");
			return (NULL);
		}
		array_str = ft_split(str, " :\n");
	}
	else
	{
		if (!(str = ft_dict(argv[1])))
		{
			ft_putstr("Error\n");
			return (NULL);
		}
		array_str = ft_split(str, " :\n");
	}
	free(str);
	return (array_str);
}
