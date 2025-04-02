/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 17:15:25 by malcosta          #+#    #+#             */
/*   Updated: 2025/03/27 10:00:23 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char *str)
{
	if ((*str >= 9 && *str <= 13) || *str == 32)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	num;

	sign = 0;
	num = 0;
	if (!(*str))
		return (0);
	while (ft_isspace(str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += *str - 48;
		str++;
	}
	if (sign % 2 != 0)
		num *= -1;
	return (num);
}

// #include<stdio.h>

// int main (void)
// {
// 	char str1[] = "-----++++-- 1230";
// 	char str2[] = "---+-456";
//     char str3[] = "     +789";
//     char str4[] = "			-42";
//     char str5[] = "	214748364xx7";
//     char str6[] = "-+--++++2";
//     char str7[] = "not a number";
// 	char str8[] = "-+--++++21474836abc";

//     printf("%s converted to integer is: %d\n", str1, ft_atoi(str1));
//     printf("%s converted to integer is: %d\n", str2, ft_atoi(str2));
//     printf("%s converted to integer is: %d\n", str3, ft_atoi(str3));
//     printf("%s converted to integer is: %d\n", str4, ft_atoi(str4));
//     printf("%s converted to integer is: %d\n", str5, ft_atoi(str5));
//     printf("%s converted to integer is: %d\n", str6, ft_atoi(str6));
//     printf("%s converted to integer is: %d\n", str7, ft_atoi(str7));
// 	printf("%s converted to integer is: %d\n", str8, ft_atoi(str8));

//     return 0;
// }