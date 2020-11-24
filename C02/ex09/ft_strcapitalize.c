/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 15:58:09 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/09 16:07:57 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_capitalize(char str)
{
	if ((str < 'A') || (str > 'z') || ((str > 'Z') && (str < 'a')))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = str[i] + 32;
		if ((ft_capitalize(str[i - 1])) && !(ft_capitalize(str[i])))
			str[i] = str[i] - 32;
		if ((str[i - 1] >= '0' && str[i - 1] <= '9' && str[i] >= 'A' &&
		str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
