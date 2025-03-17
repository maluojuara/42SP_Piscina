/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 13:50:44 by malcosta          #+#    #+#             */
/*   Updated: 2025/03/15 14:01:52 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*orig;

	orig = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
		str++;
	}
	return (orig);
}

// #include<stdio.h>
// int main ()
// {
// 	char string[] = "AABB";
// 	printf("maiusculo: %s", string);
// 	printf("\nagora em minusculo: %s", ft_strlowcase(string));
// 	return 0;
// }