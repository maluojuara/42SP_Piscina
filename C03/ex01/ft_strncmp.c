/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 17:18:53 by malcosta          #+#    #+#             */
/*   Updated: 2025/03/25 17:54:10 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && (*s1 || *s2))
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

// #include<stdio.h>
// #include<string.h>

// int main ()
// {
// 	char * str = "hello";
// 	char *str2 = "hellz";

// 	printf("%d\n", ft_strncmp(str2, str, 4));
// 	printf("%d\n", strncmp(str2, str, 4));
// }