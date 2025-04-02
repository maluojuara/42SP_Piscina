/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 17:18:49 by malcosta          #+#    #+#             */
/*   Updated: 2025/03/18 17:18:50 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*orig;

	orig = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (orig);
}

// #include<stdio.h>

// int main ()
// {
// 	char * s = "lu";
// 	char d[20] = "ma";
// 	printf("%s", ft_strcat(d, s));
// }