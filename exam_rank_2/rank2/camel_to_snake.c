#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    int let_count;

    i = 0;
    let_count = 0;
    while (str[i])
    {
        if (str[i] >= 65 && str[i] <= 90)
            let_count++;
        i++;
    }
    i += let_count;
    return (i);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i;
        int j;
        char *str;

        str = malloc(sizeof(char *) * ft_strlen(av[1]) + 1);
        i = 0;
        j = 0;
        while (av[1][i])
        {
            if ((av[1][i] >= 65 && av[1][i] <= 90) && i != 0)
            {
                printf("ola");
                str[j] = 95;
                j++;
                str[j] = av[1][i] + 32;
                j++;
            }
            else
            {
                str[j] = av[1][i];
                j++;
            }
            i++;
        }
        str[j] = '\0';
        i = -1;
        while (str[++i])
            write(1, &str[i], 1);
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
}