/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maluojuara <maluojuara@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 01:59:25 by maluojuara        #+#    #+#             */
/*   Updated: 2025/03/12 02:21:37 by maluojuara       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c);

void    ft_putchar(char c)
{
        write(1, "c", 1);
}

/*
int     main (void) {
    ft_putchar('m');
    ft_putchar('i');
    ft_putchar('9');
}
*/