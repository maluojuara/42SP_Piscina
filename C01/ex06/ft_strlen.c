int ft_strlen (char *str)
{
    int i;

    i = 0;
    while(str[i]) 
        i++;
    return i;
}

/*
#include<stdio.h>

int main () {
    int len = ft_strlen("malu eh incrivel");
    printf("%i", len);
}
*/