/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:05:38 by malcosta          #+#    #+#             */
/*   Updated: 2025/04/01 22:20:43 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strcat(char *dst, char *src)
{
	while (*src)
		*(dst++) = *(src++);
	return (dst);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char		*out;
	char		*tmp;
	int			strs_len;
	int			i;

	if (!size)
	{
		out = malloc(1);
		out[0] = 0;
		return (out);
	}
	strs_len = 0;
	i = 0;
	while (i < size)
		strs_len += ft_strlen(strs[i++]);
	out = malloc(strs_len + (size - 1) * ft_strlen(sep) + 1);
	tmp = ft_strcat(out, strs[0]);
	i = 1;
	while (i < size)
	{
		tmp = ft_strcat(tmp, sep);
		tmp = ft_strcat(tmp, strs[i++]);
	}
	*tmp = '\0';
	return (out);
}

// #include <stdio.h>

// 	int main()
// {
//     char *strings[] = { "Hello", "world" };
//     char *out = ft_strjoin(2, strings, "");
//     printf("%s\n", out);
//     free(out);
//     return 0;
// }
