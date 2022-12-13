#include <stdio.h>

int max(int *tab, unsigned int len)
{
    unsigned int i;
    int big;

    i = 0;
    big = 0;
    if (!tab[i])
        return (0);
    while (i < len)
    {
        if (tab[i] > big)
            big = tab[i];
        i++;
    }
    return (big);
}


int main(void)
{
    int array[] = {};

    printf("large nr - %d\n", max(array, 4));

}