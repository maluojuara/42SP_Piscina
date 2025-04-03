/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 11:08:22 by vitosant          #+#    #+#             */
/*   Updated: 2025/04/02 19:07:58 by vitosant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	print_argv(int argc, char **argv);

int	main(int argc, char **argv)
{	
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc && argc > 2)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[i];
				argv[i] = temp;
			}
			j++;
		}
		i++;
	}
	print_argv(argc, argv);
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	num;

	num = 0;
	while (s1[num] != '\0' || s2[num] != '\0')
	{
		if (s1[num] != s2[num])
			return (s1[num] - s2[num]);
		num++;
	}
	return (0);
}

void	print_argv(int argc, char **argv)
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
		i++;
		write(1, "\n", 1);
		letter = 0;
	}
}
