/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 10:48:12 by vitosant          #+#    #+#             */
/*   Updated: 2025/04/02 11:15:04 by vitosant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[0][i] != 0 && argc > 0)
	{
		write(1, &(argv[0][i]), 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
