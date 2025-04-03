/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 10:58:58 by vitosant          #+#    #+#             */
/*   Updated: 2025/04/02 19:12:47 by vitosant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	letter;

	argc--;
	while (argc > 0)
	{
		while (argv[argc][letter] != '\0')
		{
			write(1, &(argv[argc][letter]), 1);
			letter++;
		}
		argc--;
		letter = 0;
		write(1, "\n", 1);
	}
	return (0);
}
