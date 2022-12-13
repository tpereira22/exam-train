#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int res;

    i = 0;
    res = 0;
    while (str[i])
    {
        res = res * 10 + str[i] - 48;
        i++;
    }
    return (res);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

void   ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int num)
{
    if (num > 9)
    {
        ft_putnbr(num / 10);
        ft_putnbr(num % 10);
    }
    else
        ft_putchar(num + 48);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i;
        int num;
        int total;

        num = ft_atoi(av[1]);
        i = 1;
        total = 0;
        while (i < 10)
        {
            ft_putnbr(i);
            ft_putstr(" * ");
            ft_putnbr(num);
            ft_putstr(" = ");
            total = i * num;
            ft_putnbr(total);
            ft_putchar('\n');
            i++;
        }
    }
    else
        write(1, "\n", 1);
}