/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 17:18:44 by malcosta          #+#    #+#             */
/*   Updated: 2025/03/23 16:34:59 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dest_orig;

	dest_orig = dest;
	while (*dest)
		dest++;
	while (nb > 0 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (dest_orig);
}

// #include <string.h>
// #include<stdio.h>

// int main ()
// {
// 	char * s = "World";
// 	char d[100000000] = "Hello";
// 	// printf("%s", strncat(d, s, 984998));
// 	printf("%s", ft_strncat(d, s, 984998));
// }