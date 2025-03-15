// escrever x caracteres de largura e y de altura
void	ft_putchar(char c);

void    put_top_bottom(int x)
{
    int i;
    int j;

    i = 1;
    j = 1;
    while (i <= x)
    {
        if (i == 1)
        {
            ft_putchar('A');
        }
        else if (i == x) {
            ft_putchar('C');
            ft_putchar('\n');
        } 
        else {
            while (j <= x - 2) {
                ft_putchar('B');
                j++;
            }
        }
        i++;
    }
}

void    put_middle(int x) {
    int i;
    int j;
    i = 1;
    j = 1;
    while (i <= x) {
        if (i == 1)
        {
            ft_putchar('B');
        }
        else if (i == x) {
            ft_putchar('B');
            ft_putchar('\n');
        } 
        else {
            while (j <= x - 2) {
                ft_putchar(' ');
                j++;
            }
        }
        i++;
    }
}

void put_exception(int x, int y)
{
    int i;
    i = 1;
    
    if (x == 1 && y == 1) {
        ft_putchar('A');
        ft_putchar('\n');
    }

    else if (x == 1 && y > 1) 
    {
        ft_putchar('A');
        ft_putchar('\n');
        while (i <= y - 2){
            ft_putchar('B');
            ft_putchar('\n');
            i++;
        }
        ft_putchar('A');
        ft_putchar('\n');
    }

    else if (y == 1 && x > 1)
        put_top_bottom(x);
}

void    rush(int x, int y) {
    int i;
    i = 1;

    if (x <= 0 || y <= 0)
        return ;
    else if (x > 1 && y > 1)
        {
        put_top_bottom(x);
        while (i <= y - 2) {
            put_middle(x);
            i++;
        }
        put_top_bottom(x);
    }
    else
        put_exception(x, y);
}
