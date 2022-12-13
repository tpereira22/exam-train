#include <unistd.h>

void    ft_count(char c)
{
    int i;
    int j;
    char str[24] = "abcdefghijklmnopqrstuwyz";

    i = 0;
    while (str[i] != '\0')
    {
        if (c == 32 || c == 9)
        {
            write(1, " ", 1);
            break ;
        }
        else if (c >= 33 && c <= 64)
        {   
            write(1, &c, 1);
            break ;
        }
        else if (str[i] == c)
        {
            j = i + 1;
            while (j > 0)
            {
                write(1, &c, 1);
                j--;
            }
        }
        i++;
    }
}

int main (int ac, char **av)
{
    int i;

    if (ac == 2)
    {
        i = 0;
        while (av[1][i] != '\0')
        {
            ft_count(av[1][i]);
            i++;
        }
    }
    else
        write(1, "\n", 1);
}