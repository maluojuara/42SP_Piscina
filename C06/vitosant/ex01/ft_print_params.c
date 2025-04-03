/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 10:53:38 by vitosant          #+#    #+#             */
/*   Updated: 2025/04/02 10:58:02 by vitosant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	letter;

	i = 1;
	letter = 0;
	while (i < argc)
	{
		while (argv[i][letter] != '\0')
		{
			write(1, &(argv[i][letter]), 1);
			letter++;
		}
		write(1, "\n", 1);
		i++;
		letter = 0;
	}
}
