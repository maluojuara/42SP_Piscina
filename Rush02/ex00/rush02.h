/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 07:16:00 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/03/30 20:07:32 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <fcntl.h>  
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_key_value_pair
{
	int		key_len;
	char	*key;
	char	*value;
}	t_key_value_pair;

int					ft_atoi(char *str);
int					ft_has_only_spaces(char *str);
int					ft_has_only_numbers(char *str);
int					ft_index_of(char *ptr, char end);
int					ft_is_space(char c);
void				ft_putstr(char *str);
char				*ft_slice(char *str, int start, int end);
int					ft_strcmp(char *s1, char *s2);
int					ft_strlen(char *str);
void				ft_strncpy(char *dest, char *src, int n);
char				*ft_to_string(int n);
void				ft_trim(char *str);
void				ft_initialize_char(char *buffer, int size);
void				free_dict(t_key_value_pair *dict);
int					ft_has_key(t_key_value_pair *dict, char *key);
int					get_max_number_from_dict(t_key_value_pair *dict);
int					get_max_power_in_dict(t_key_value_pair *dict);
t_key_value_pair	*new_dict(int len);
int					new_key_value_pair(char *line, t_key_value_pair **cursor);
void				print_value(t_key_value_pair *dict, char *key, int last);
void				print_small_number(t_key_value_pair *dict, int n, int last);
void				print_power_sufix(t_key_value_pair *dict, int power);
void				print_groups(t_key_value_pair *dict, char *str, int len);
void				print_group(
						t_key_value_pair *dict,
						char *group,
						int power,
						int last
						);
int					ft_is_power(char *str, int power);
int					get_required_power_from_input(char *str);
int					exceeds_dict_range(char *input, int max_power);
char				*get_value(char *line);
int					is_valid_line(char *line);
char				*get_key(char *line);
int					handle_user_input(
						int argc,
						char **argv,
						char **input,
						char **dict
						);
int					parse_dict(char *file, t_key_value_pair	**dict);
t_key_value_pair	*initialize_dict(char *file);
int					count_lines(int fd);
int					read_lines(t_key_value_pair	*dict, int fd);
int					print_number(t_key_value_pair *dict, char *str, int last);
int					is_valid_input(char *str);
int					aggregate_until_end_line(
						char *buffer,
						char *acumulator,
						int *count,
						t_key_value_pair **dict
						);

#endif
