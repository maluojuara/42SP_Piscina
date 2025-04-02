/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 17:16:10 by malcosta          #+#    #+#             */
/*   Updated: 2025/03/27 10:03:57 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_check_base(char *base)
{
	char	*ptr1;
	char	*ptr2;

	if (ft_strlen(base) <= 1)
		return (0);
	ptr1 = base;
	while (*ptr1)
	{
		if (*ptr1 == '+' || *ptr1 == '-')
			return (0);
		ptr2 = ptr1 + 1;
		while (*ptr2)
		{
			if (*ptr1 == *ptr2)
				return (0);
			ptr2++;
		}
		ptr1++;
	}
	return (1);
}

int	ft_get_base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_skip_spaces_and_signs(char *str, int *sign)
{
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			(*sign)++;
		str++;
	}
	return (str);
}

int	ft_atoi_base(char *str, char *base)
{
	int	len_base;
	int	sign;
	int	num;
	int	index;

	sign = 0;
	num = 0;
	len_base = ft_strlen(base);
	if (!(*str) || !ft_check_base(base))
		return (0);
	str = ft_skip_spaces_and_signs(str, &sign);
	index = ft_get_base_index(*str, base);
	while (index != -1)
	{
		num *= len_base;
		num += index;
		str++;
		index = ft_get_base_index(*str, base);
	}
	if (sign % 2 != 0)
		num *= -1;
	return (num);
}

// #include <stdio.h>

// int main ()
// {
// 	printf("%i", ft_atoi_base("-----++++-- 1230", "0123456789"));
// }