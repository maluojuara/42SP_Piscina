/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 17:15:58 by malcosta          #+#    #+#             */
/*   Updated: 2025/03/26 10:41:03 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		len_base;

	nb = nbr;
	len_base = 0;
	len_base = ft_strlen(base);
	if (ft_check_base(base))
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb > len_base - 1)
		{
			ft_putnbr_base(nb / len_base, base);
			ft_putnbr_base(nb % len_base, base);
		}
		else
		{
			ft_putchar(base[nb]);
		}
	}
}

// int main ()
// {
// 	ft_putnbr_base(17, "0123456789abcdef");
// }