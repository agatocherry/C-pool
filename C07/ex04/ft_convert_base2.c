/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 19:16:17 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/18 09:32:05 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_space(char c);
int		error(char *str);
int		ft_stop(char c, char *base);
int		ft_atoi_base_part_two(char *str, char *base, int i, int size_base);
int		ft_atoi_base(char *str, char *base);

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_convert_base_2(int size_to, char *base, char *dest, long l)
{
	int		i;
	int		size;

	size = ft_strlen(base);
	i = 0;
	dest = (char*)malloc((size_to * sizeof(char)) + 1);
	if (dest == NULL)
		return (NULL);
	i = size_to;
	size_to = size_to - 1;
	if (l < 0)
	{
		l = l * -1;
		dest[0] = '-';
	}
	while (l > 0)
	{
		dest[size_to] = base[l % size];
		l = l / size;
		size_to--;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_convert_base_1(int size_to, int nbr, char *base, char *dest)
{
	long	l;

	l = nbr;
	if (l == 0)
	{
		dest = (char*)malloc((1 * sizeof(char)) + 1);
		dest[0] = base[0];
		dest[1] = '\0';
		return (dest);
	}
	if (l < 0)
	{
		size_to = size_to + 1;
	}
	dest = ft_convert_base_2(size_to, base, dest, l);
	return (dest);
}

int		global_error(char *base_from, char *base_to)
{
	if (base_from[0] == '\0' || base_to[0] == '\0')
		return (1);
	if (error(base_from))
		return (1);
	if (error(base_to))
		return (1);
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		convert;
	char	*dest;
	int		size;
	int		i;

	size = 0;
	if (global_error(base_from, base_to))
		return (NULL);
	convert = ft_atoi_base(nbr, base_from);
	i = convert;
	if (i < 0)
		i = i * -1;
	while (i > 0)
	{
		size++;
		i = i / ft_strlen(base_to);
	}
	dest = NULL;
	dest = ft_convert_base_1(size, convert, base_to, dest);
	return (dest);
}
