/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 11:05:56 by agcolas           #+#    #+#             */
/*   Updated: 2020/08/23 23:28:01 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <fcntl.h>

int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_strdup(char *src);
char	*ft_strcat(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
int		ft_is_separator(char c, char *charset);
int		ft_calculate_words(char *str, char *charset);
int		ft_calculate_size_words(char *str, char *charset);
char	**ft_split(char *str, char *charset);
char	*ft_dict_local(char *file);
char	**parsing(int argc, char **argv);
void	find_tens_numbers(char *nbr, char **array_str, int pos);
void	find_number_after_tens(char *nbr, char **array_str, int pos);
char	*check_10_19(char *nbr, char **array_str, int pos);
void	print(char *nbr, int size, char **array_str);
char	*get_numbs(char **array_str, int size);
char	*find_value(char **array_str, char *str);
int		search_1(char **array_str, char *nbr, int argc);
int		search(char **array_str, char **argv, int argc);
int		main(int argc, char **argv);

#endif
