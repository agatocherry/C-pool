/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 17:40:20 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/26 16:33:00 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		add(int nb_left, int nb_right)
{
	return (nb_left + nb_right);
}

int		sub(int nb_left, int nb_right)
{
	return (nb_left - nb_right);
}

int		div(int nb_left, int nb_right)
{
	return (nb_left / nb_right);
}

int		mul(int nb_left, int nb_right)
{
	return (nb_left * nb_right);
}

int		mod(int nb_left, int nb_right)
{
	return (nb_left % nb_right);
}
