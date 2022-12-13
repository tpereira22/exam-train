#include <unistd.h>
#include <stdio.h>

int ft_check2(char *str, char c, int len)
{
    int i = 0;

    while (i < len)
    {
        //printf("str - %c | c - %c | i - %d\n", str[i], c, i);
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}

int ft_len(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int i;
        int len_av1;

        i = 0;
        while (av[1][i])
        {
            if (ft_check2(av[1], av[1][i], i))
                write(1, &av[1][i], 1);
            i++;   
        }
        i = 0;
        len_av1 = ft_len(av[1]);
        while (av[2][i])
        {
            if (ft_check2(av[1], av[2][i], len_av1) && ft_check2(av[2], av[2][i], i))
                write(1, &av[2][i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
}