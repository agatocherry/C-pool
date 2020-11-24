/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 14:56:00 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/25 10:34:24 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <libgen.h>

int		ft_is_space(char c);
int		ft_atoi(char *str);

void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_puterror(char *str);
void	input(void);
void	ft_putstr(char *str);
char	*get_stdin_data(void);

int		tail_argument(char **argv);
int		tail_size_file(char *file);
int		if_error_argc(char **argv, int i);
int		error_argc(int argc, char **argv);

void	tail_print(char *file, int size, int nbr);
int		error(char *file, char *program_name);
int		multiple_file(int argc, char *argv, int title);
int		read_text(int argc, char **argv);

int		main(int argc, char **argv);

#endif
