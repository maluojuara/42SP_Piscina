/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 17:18:40 by malcosta          #+#    #+#             */
/*   Updated: 2025/03/23 17:01:21 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*t;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		s = str;
		t = to_find;
		while (*s && *t && *s == *t)
		{
			s++;
			t++;
		}
		if (*t == '\0')
			return (str);
		str++;
	}
	return (0);
}

// #include<stdio.h>
// #include<string.h>

// int main ()
// {
// 	char * s = "oiiii meu nome eh malu";
// 	char *d = "nome";
// 	printf("%s", ft_strstr(s, d));
// 	// printf("%s", strstr(s, d));

// 	return (0);
// }