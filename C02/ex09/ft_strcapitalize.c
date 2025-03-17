/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 16:32:37 by malcosta          #+#    #+#             */
/*   Updated: 2025/03/17 14:57:48 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	capitalize_char(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	is_number(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

int	is_alphabet(char c)
{
	if (!(c >= 'A' && c <= 'Z') && !(c >= 'a' && c <= 'z'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str[i] = capitalize_char (str[i]);
	while (str[i])
	{
		if (!(is_alphabet(str[i - 1]) || is_number(str[i - 1])))
			str[i] = capitalize_char(str[i]);
		i++;
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
	return (str);
}

// #include <stdio.h>

// int main ()
// {
// 	char str[] = "!@#$^&*()_+-=[]{}\\|;':";
// 	char *strmudada = ft_strcapitalize(str);
// 	printf("%s", strmudada);
// 	return 0;
// }
// Testes:

// "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"

// Esperado: "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un"

// "" (String vazia)

// Esperado: ""
// "a"

// Esperado: "A"
// "HELLO"

// Esperado: "Hello"
// "hello"

// Esperado: "Hello"

// " hello" (Com espaços no início)

// Esperado: " Hello"

// "hello " (Com espaços no final)

// Esperado: "Hello "
// "hello world" (Com múltiplos espaços entre palavras)

// Esperado: "Hello World"
// "a1b2c3d4e5f6g7h8i9j0" (Números misturados com letras)

// Esperado: "A1b2c3d4e5f6g7h8i9j0"
// "!@#$%^&*()_+-=[]{}\|;':",./<>?" (Somente caracteres especiais)

// Esperado: "!@#$%^&*()_+-=[]{}\\|;':\",./<>?"