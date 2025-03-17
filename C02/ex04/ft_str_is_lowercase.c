/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 11:05:05 by malcosta          #+#    #+#             */
/*   Updated: 2025/03/15 11:11:17 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>

// int main ()
// {
// 	char *num = "124";
// 	char *lower = "abcd";
// 	char *upper = "ABCD";
// 	char *mix = "AbCd";
// 	char *emp = "";
// 	printf("%d\n", ft_str_is_lowercase(num));
// 	printf("%d\n", ft_str_is_lowercase(lower));
// 	printf("%d\n", ft_str_is_lowercase(upper));
// 	printf("%d\n", ft_str_is_lowercase(mix));
// 	printf("%d\n", ft_str_is_lowercase(emp));
// }