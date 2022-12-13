#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i;
        
        i = 0;
        while (av[1][i] == 32 || av[1][i] == 9 || av[1][i] == 13)
            i++;
        while (av[1][i])
        {
            if ((av[1][i] == 32 || av[1][i] == 9 || av[1][i] == 13) && (av[1][i+1] == 32 || av[1][i+1] == 9 || av[1][i+1] == 13 || av[1][i+1] == '\0'))
                i++;
            else
            {
                write(1, &av[1][i], 1);
                i++;
            }
        }
    }
    else
        write(1, "\n", 1);
}