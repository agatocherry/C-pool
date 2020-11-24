/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 16:31:23 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/25 10:27:52 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <libgen.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
void	print_offset(int nb, char *base);
void	print_str_char(char current_line[17]);
void	print_line(char current[17], char previous[17], int nb,
			char *base);
void	ft_print_error(char *file_name);
void	ft_hexdump(char **files, int argc, int i, int k);
void	print_char_hexa(char current_line[17], int i, char *base);
void	print_last_offset(int nb, char *base,
		char previous[17], char current[17]);
void	ft_putstr_error(char *str);

#endif
