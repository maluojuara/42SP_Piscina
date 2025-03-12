/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maluojuara <maluojuara@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 02:26:00 by maluojuara        #+#    #+#             */
/*   Updated: 2025/03/12 02:28:47 by maluojuara       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_print_reverse_alphabet(void);

void ft_print_reverse_alphabet(void) {
    char letra;

    letra = 'z';
    while (letra >= 'a') {
        write(1, &letra, 1);
        letra--;
    }
}

int main (void) {
    ft_print_reverse_alphabet();
}