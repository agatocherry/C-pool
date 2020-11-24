/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 15:49:19 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/15 16:29:44 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_print_solution(int solution[4][4]);

void	ft_initialize_solution(int solution[4][4]);
void	ft_initialize_views(int views[4][4], char *values);

int		ft_is_row_diff(int solution[4][4]);
int		ft_is_col_diff(int solution[4][4]);

int		ft_is_view_up_correct(int solution[4][4], int views[4], int pos);
int		ft_is_view_down_correct(int solution[4][4], int views[4], int pos);
int		ft_is_view_left_correct(int solution[4][4], int views[4], int pos);
int		ft_is_view_right_correct(int solution[4][4], int views[4], int pos);

#endif
