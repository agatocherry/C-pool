/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 19:15:38 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/09 20:34:10 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int count_str;
	int count_find;

	count_str = 0;
	count_find = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[count_str] != '\0')
	{
		count_find = 0;
		while (to_find[count_find] == str[count_str + count_find])
		{
			if (to_find[count_find + 1] == '\0')
				return (&str[count_str]);
			count_find++;
		}
		count_str++;
	}
	return (0);
}
