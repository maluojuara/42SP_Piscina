int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z') && !(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}

// #include<stdio.h>

// int main () {
// 	char *alpha = "abcd";
// 	char *mix ="abc09*";
// 	char *simb ="09*";
// 	printf("%d\n", ft_str_is_alpha(alpha));
// 	printf("%d\n", ft_str_is_alpha(simb));
// 	printf("%d\n", ft_str_is_alpha(mix));
// }
