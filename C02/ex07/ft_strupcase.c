/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 13:36:52 by malcosta          #+#    #+#             */
/*   Updated: 2025/03/15 13:49:53 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*orig;

	orig = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		str++;
	}
	return (orig);
}
// #include<stdio.h>
// int main ()
// {
// 	char string[] = "aaabbb";
// 	printf("minusculo: %s", string);
// 	printf("\nagora em maiusculo: %s", ft_strupcase(string));
// 	return 0;
// }