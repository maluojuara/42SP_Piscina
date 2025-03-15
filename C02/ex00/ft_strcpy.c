char	*ft_strcpy(char *dest, char *src)
{
	char	*orig;

	orig = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (orig);
}
// #include<stdio.h>

// int main(void)
// {
//     char src[] = "Malu";
//     char dest[50];
// 	printf("Fonte: %s\n", src);
// 	printf("Destino antes: %s\n", dest);

//     ft_strcpy(dest, src);

//     printf("Destino depois: %s\n", dest);

//     return 0;
// }