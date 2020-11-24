/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihauet <dihauet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 17:39:34 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/26 17:02:15 by dihauet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>


int		add(int nb_left, int nb_right);
int		sub(int nb_left, int nb_right);
int		div(int nb_left, int nb_right);
int		mul(int nb_left, int nb_right);
int		mod(int nb_left, int nb_right);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_is_space(char c);
int		ft_atoi(char *str);
int		ft_error(int argc, char **argv);
int		main(int argc, char **argv);


typedef struct s_calculate
{
	char *operator;
	int (*calculate)(int, int);
}  t_calculate;

t_calculate g_calcul_tab[] = 
{
	{"+", &add},
	{"-", &sub},
	{"/", &div},
	{"*", &mul},
	{"%", &mod},
};

static  int	(*g_calculate[5])(int, int) = {&add, &sub, &div, &mul, &mod};
#endif
