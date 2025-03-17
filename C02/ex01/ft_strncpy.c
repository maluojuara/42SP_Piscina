/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 10:51:31 by malcosta          #+#    #+#             */
/*   Updated: 2025/03/15 10:51:33 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//n eh a quantidade que você quer copiar de src para dest (max)
// se vc quiser copiar 10 caracteres, mas a src so tem 3, ele vai preencher os 
// 7 restantes com \0
// se o n for maior que dest, dá segfault (nao precisamos lidar nessa, 
// pq a original n lida tbm)
// se mandar copiar 3, e ai não tiver terminado, ele não vai colocar 
// o \0 no final, o que pode dar
// seg fault mais pra frente. ou seja, quando for usar essa função, 
// precisa garantir que depois a
// string será terminada com null (colocar na mão)

// Man strncpy:
// The stpncpy() and strncpy() functions copy at most len 
// characters from src into dst.  
// If src is less than len characters long, the remainder of dst is
//filled with ‘\0’ characters.  Otherwise, dst is not terminated.

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*orig;

	orig = dest;
	while (*src && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (orig);
}
// #include <stdio.h>

// int main(void)
// {
//     char src[] = "Malu";
//     char dest[10]; 

//     ft_strncpy(dest, src, 10);

//     printf("Resultado: %s\n", dest);

//     char src2[] = "Araujo";
//     char dest2[10];
//     ft_strncpy(dest2, src2, 3);  

//     printf("Resultado 2: %s\n", dest2);

//     return 0;
// }