#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i;

        i = 0;
        while (av[1][i])
            i++;
        while(av[1][i] == 32 || av[1][i] == 9 || av[1][i] == '\0')
            i--;
        while (av[1][i] != 32 && av[1][i] != 9 && av[1][i] != '\0' && i >= 0)
            i--;
        i++;
        while (av[1][i] && (av[1][i] != 32 && av[1][i] != 9))
        {
            write(1, &av[1][i], 1);
            i++;
        }
        write(1, "\n", 1);   
    }
    else
        write(1, "\n", 1);      
}