#include <stdio.h>

int is_power_of_2(unsigned int n)
{
    int res;

    res = 0;
    while (n > 2)
    {
        n = n / 2;
        res = n % 2;
        if (res != 0)
            return (0);
    }
    return (1);
}

int main(void)
{
    int nr1;
    //int nr2;
    //int nr3;

    nr1 = 128;
    //nr2 = 7;
    //nr3 = 128;
    printf("nr1 - %d\n", is_power_of_2(nr1));
    //printf("nr2 - $d\n", is_power_of_2(nr2));
    //printf("nr3 - $d\n", is_power_of_2(nr3));
}