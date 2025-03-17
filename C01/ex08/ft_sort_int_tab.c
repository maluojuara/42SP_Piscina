/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 19:16:59 by malcosta          #+#    #+#             */
/*   Updated: 2025/03/13 19:18:11 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	c1;
	int	c2;

	c1 = 0;
	while (c1 < (size - 1))
	{
		c2 = c1 + 1;
		while (c2 < size)
		{
			if (tab[c1] > tab[c2])
			{
				ft_swap(&tab[c1], &tab[c2]);
			}
			c2++;
		}
		c1++;
	}
}

/*
#include<stdio.h>

int main () {
    int array1[] = {1, 89877, 2, 67,  4};
    int array2[] = {5, 4, 3, 2, 1};


    printf("Antes: \n");
    for (int i = 0; i < 5; i++)
    printf("%i ", array1[i]);
    
    ft_sort_int_tab(array1, 5);

    printf("\ndepois: \n");
    for (int i = 0; i < 5; i++)
    printf("%i ", array1[i]);

    printf("\n ------------------ \n ");

    printf("Antes: \n");
    for (int i = 0; i < 5; i++)
    printf("%i ", array2[i]);
    
    ft_sort_int_tab(array2, 5);

    printf("\ndepois: \n");
    for (int i = 0; i < 5; i++)
    printf("%i ", array2[i]);
} */