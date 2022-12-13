#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av)
{
    int a;
    int b;
    int total;

    total = 0;
    if (ac == 4)
    {
        a = atoi(av[1]);
        b = atoi(av[3]);
        if (av[2][0] == 42)
            total = a * b;
        if (av[2][0] == 43)
            total = a + b;
        if (av[2][0] == 45)
            total = a - b;
        if (av[2][0] == 47)
            total = a / b;
        printf("%d\n", total);
    }
    else
    {
        write(1, "\n", 1);
    }
}