#include <unistd.h>

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
    if (ac == 3)
    {
        int i;
        int j;
        int len;

        i = 0;
        j = 0;
        len = ft_len(av[1]);
        while (av[1][i] && av[2][j])
        {
            if (av[1][i] == '\0' || av[2][j] == '\0')
                break ;
            if (av[1][i] != av[2][j])
                j++;
            else
            {
                j++;
                i++;
            }      
        }
        if (len == i)
        {
            j = 0;
            while (av[1][j])
            {
                write(1, &av[1][j], 1);
                j++;
            }
        }
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
}