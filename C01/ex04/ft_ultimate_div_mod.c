/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 19:05:40 by malcosta          #+#    #+#             */
/*   Updated: 2025/03/13 19:07:09 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
#include<stdio.h>

int main() {
    int a = 10;
    int b = 3;

    printf("Antes: a = %i, b = %i\n", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("Depois: a = %i, b = %i\n", a, b);
}*/