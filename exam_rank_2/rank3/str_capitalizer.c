#include <unistd.h>
#include <stdio.h>

char    *ft_lower(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
        i++;
    }
    return (str);
}

int main(int ac, char **av)
{
    if (ac > 1)
    {
        int i;
        int j;

        i = 0;
        while (av[i])
        {
            av[i] = ft_lower(av[i]);
            j = 0;
            while (av[i][j])
            {
                if (av[i][0] >= 97 && av[i][0] <= 122 )
                    av[i][0] = av[i][0] - 32;
                if ((av[i][j] == 32 || av[i][j] == 9) && (av[i][j+1] >= 97 && av[i][j+1] <= 122))
                    av[i][j+1] = av[i][j+1] - 32;
                j++;
            }
            i++;
        }
        i = 0;
        while (av[i])
        {
            j = 0;
            while (av[i][j])
            {
                write(1, &av[i][j], 1);
                j++;
            }
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
}