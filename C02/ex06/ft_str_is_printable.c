/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 13:24:08 by malcosta          #+#    #+#             */
/*   Updated: 2025/03/15 13:35:47 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= ' ' && *str <= '~'))
			return (0);
		str++;
	}
	return (1);
}

// #include<stdio.h>

// int main ()
// {
// 	char *num = "124";
// 	char *letter = "abcd";
// 	char *notprint = "\a\b";
// 	char *mix = "\bAbCd";
// 	char *emp = "";
// 	printf("%d\n", ft_str_is_printable(num));
// 	printf("%d\n", ft_str_is_printable(letter));
// 	printf("%d\n", ft_str_is_printable(notprint));
// 	printf("%d\n", ft_str_is_printable(mix));
// 	printf("%d\n", ft_str_is_printable(emp));
// }