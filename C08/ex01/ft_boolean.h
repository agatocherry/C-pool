/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 20:34:43 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/18 10:28:28 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define EVEN(nbr) nbr % 2 == 0

typedef int		t_bool;

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);
int		main(int argc, char **argv);

#endif
