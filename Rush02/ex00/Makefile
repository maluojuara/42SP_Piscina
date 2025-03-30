# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/30 07:04:55 by bcosta-b          #+#    #+#              #
#    Updated: 2025/03/30 20:48:28 by bcosta-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush02

SRCS = \
    dict_utils/free_dict.c \
    dict_utils/ft_has_key.c \
    dict_utils/get_max_number_from_dict.c \
    dict_utils/get_max_power_in_dict.c \
    dict_utils/new_dict.c \
    dict_utils/new_key_value_pair.c \
    parser_utils/aggregate_until_end_line.c \
    parser_utils/count_lines.c \
    parser_utils/hande_user_input.c \
    parser_utils/is_valid_input.c \
    parser_utils/parse_dict.c \
    parser_utils/print_number.c \
    parser_utils/read_lines.c \
    print_number/exceeds_dict_range.c \
    print_number/get_required_power_from_input.c \
    print_number/is_power.c \
    print_number/print_group.c \
    print_number/print_groups.c \
    print_number/print_power_sufix.c \
    print_number/print_small_number.c \
    print_number/print_value.c \
    str_utils/ft_atoi.c \
    str_utils/ft_has_only_numbers.c \
    str_utils/ft_has_only_spaces.c \
    str_utils/ft_index_of.c \
    str_utils/ft_initialize_char.c \
    str_utils/ft_is_space.c \
    str_utils/ft_putstr.c \
    str_utils/ft_slice.c \
    str_utils/ft_strcmp.c \
    str_utils/ft_strlen.c \
    str_utils/ft_strncpy.c \
    str_utils/ft_to_string.c \
    str_utils/ft_trim.c \
	rush02.c

CC = cc
CFLAGS = -Wall -Wextra -Werror -I.

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


