#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar(nb + 48);
}

int main(int ac, char **av)
{
    if (ac > 1)
    {
        (void)av;
        ft_putnbr(ac - 1);
        write(1, "\n", 1);
    }
    else
        write(1, "0\n", 2);
}
