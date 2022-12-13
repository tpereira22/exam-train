#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int res = 0;
    int i = 0;

    while (str[i])
    {
        res = res * 10 + str[i] - 48;
        i++;
    }
    return (res);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_hex(int nb)
{
    if (nb > 16)
    {
        ft_print_hex(nb / 16);
        ft_print_hex(nb % 16);
    }
    else
        if (nb > 9)
            ft_putchar(nb + 87);
        else
            ft_putchar(nb + 48);
}

int main(int ac, char **av)
{
    if (ac == 2)
    { 
        ft_print_hex(ft_atoi(av[1]));
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
}