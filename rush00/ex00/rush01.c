/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 18:27:58 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/08 18:40:57 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putline(int y, char a, char b, char c)
{
	int i;

	i = 0;
	ft_putchar(a);
	while (i < y - 2)
	{
		ft_putchar(b);
		i++;
	}
	if (y > 1)
		ft_putchar(c);
}

void	rush(int largeur, int hauteur)
{
	int i;

	i = 0;
	if (largeur > 0 && hauteur > 0)
	{
		ft_putline(largeur, '/', '*', '\\');
		ft_putchar('\n');
		while (i < hauteur - 2)
		{
			i++;
			ft_putline(largeur, '*', ' ', '*');
			ft_putchar('\n');
		}
		i = 0;
		if (i < hauteur - 2)
		{
			ft_putline(largeur, '\\', '*', '/');
			ft_putchar('\n');
		}
	}
}
