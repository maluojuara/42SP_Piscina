/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hande_user_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 16:39:05 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/03/30 19:26:24 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	handle_user_input(int argc, char **argv, char **input, char **dict)
{
	if (argc == 2)
	{
		*dict = "numbers.dict";
		*input = argv[1];
	}
	else if (argc == 3)
	{
		*dict = argv[1];
		*input = argv[2];
	}
	else
	{
		ft_putstr("Error\n");
		return (1);
	}
	return (0);
}
