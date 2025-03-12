/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maluojuara <maluojuara@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 02:22:19 by maluojuara        #+#    #+#             */
/*   Updated: 2025/03/12 02:27:50 by maluojuara       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_print_alphabet(void); 

void ft_print_alphabet(void) {
    char    letra;

    letra = 'a';
    while (letra <= 'z') {
        write(1, &letra, 1);
        letra++;
    }
}

/*
int main () {
    ft_print_alphabet();
}
*/