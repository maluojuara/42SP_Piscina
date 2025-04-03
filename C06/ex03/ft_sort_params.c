/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 17:18:54 by malcosta          #+#    #+#             */
/*   Updated: 2025/03/24 14:43:07 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_swap_params(char **param1, char **param2)
{
	char	*temp;

	temp = *param1;
	*param1 = *param2;
	*param2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

void	ft_putparams(int count, char **params)
{
	int	i;

	i = 1;
	while (i < count)
	{
		ft_putstr(params[i]);
		write (1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc > 1)
	{
		i = 1;
		while (i < (argc))
		{
			j = i + 1;
			while (j < argc)
			{
				if (ft_strcmp(argv[i], argv[j]) > 0)
					ft_swap_params(&argv[i], &argv[j]);
				j++;
			}
			i++;
		}
		ft_putparams(argc, argv);
	}
	return (0);
}
