/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 15:52:50 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/14 14:36:25 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strcpy_arrays(int size, char **strs, char *sep, char *dest)
{
	int		i;

	i = 0;
	while (i < size - 1)
	{
		ft_strcat(dest, strs[i]);
		ft_strcat(dest, sep);
		i++;
	}
	ft_strcat(dest, strs[i]);
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		size_dest;
	int		i;

	i = 0;
	dest = NULL;
	if (size == 0)
	{
		dest = (char*)malloc(1 * sizeof(char));
		dest[0] = '\0';
		return (dest);
	}
	size_dest = (ft_strlen(sep) * (size - 1));
	while (i < size)
	{
		size_dest = size_dest + ft_strlen(strs[i]);
		i++;
	}
	dest = (char*)malloc((size_dest * sizeof(char)) + 1);
	if (dest == NULL)
		return (NULL);
	dest[0] = '\0';
	dest = ft_strcpy_arrays(size, strs, sep, dest);
	return (dest);
}
