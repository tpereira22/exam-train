#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int n)
{
    if (n > 9)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else
        ft_putchar(n + 48);
}

int ft_atoi(char *str)
{
    int i;
    int res;

    i = 0;
    res = 0;
    while (str[i] == 32)
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - 48;
        i++;
    }
    return(res);
}

int ft_check_prime(int nb)
{
    int i;

    i = nb - 1;
    while (i > 1)
    {
        if ((nb % i) == 0)
            return (0);
        i--;
    }
    return (1);
}

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] != '-')
    {
        int nb;
        int total;

        nb = ft_atoi(av[1]);
        total = 0;
        while (nb > 1)
        {
            if (ft_check_prime(nb))
                total = total + nb;
            nb--;
        }
        ft_putnbr(total);
        write(1, "\n", 1);
    }
    else
    {
        write(1, "0", 1);
        write(1, "\n", 1);
    }
}