void    ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

/*
#include<stdio.h>

int main () {
    int a = 10;
    int b = 20;

    printf("Antes da troca: a= %i, b= %i\n", a, b);
    ft_swap(&a, &b);
    printf("Depois da troca da troca: a= %i, b= %i\n", a, b);
} */