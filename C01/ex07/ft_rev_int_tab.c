/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 19:11:11 by malcosta          #+#    #+#             */
/*   Updated: 2025/03/13 19:16:49 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	times;

	i = 0;
	times = size / 2;
	while (i < times)
	{
		ft_swap(&tab[i], &tab[size - 1]);
		i++;
		size--;
	}
}
/*
#include<stdio.h>

int main () {
    int array1[] = {1, 2, 3, 4};
    int array2[] = {5, 4, 3, 2, 1};


    printf("Antes: \n");
    for (int i = 0; i < 4; i++)
    printf("%i ", array1[i]);
    
    ft_rev_int_tab(array1, 4);

    printf("\ndepois: \n");
    for (int i = 0; i < 4; i++)
    printf("%i ", array1[i]);

    printf("\n ------------------ \n ");

    printf("Antes: \n");
    for (int i = 0; i < 5; i++)
    printf("%i ", array2[i]);
    
    ft_rev_int_tab(array2, 5);

    printf("\ndepois: \n");
    for (int i = 0; i < 5; i++)
    printf("%i ", array2[i]);
} */