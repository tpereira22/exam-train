#include <unistd.h>

int ft_check(char *str, char c,  int len)
{
    int i;

    i = 0;
    while (i < len)
    {
        if (c == str[i])
            return (0);
        i++;
    }
    return (1);
}

int ft_len(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int main(int ac, char **av)
{
    int i;

    if (ac == 3)
    {
        i = 0;
        while (av[1][i])
        {
            if (ft_check(av[1], av[1][i], i) && !ft_check(av[2], av[1][i], ft_len(av[2])))
                write(1, &av[1][i], 1);
            i++;
        }
    } 
    else
        write(1, "\n", 1);
}