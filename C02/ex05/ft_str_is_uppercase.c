/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 11:09:50 by malcosta          #+#    #+#             */
/*   Updated: 2025/03/15 11:13:10 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
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
// 	printf("%d\n", ft_str_is_uppercase(num));
// 	printf("%d\n", ft_str_is_uppercase(lower));
// 	printf("%d\n", ft_str_is_uppercase(upper));
// 	printf("%d\n", ft_str_is_uppercase(mix));
// 	printf("%d\n", ft_str_is_uppercase(emp));
// }