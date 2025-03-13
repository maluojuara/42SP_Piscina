void    ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;

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