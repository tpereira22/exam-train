#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i;
    int j;
    char temp;

    j = 0;
    while (str[j])
        j++;
    i = 0;
    j--;
    while (str[i] && i < j)
    {
        printf("j - %d\ni - %d\n", j, i);
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return (str);
}

int main(void)
{
    char array1[5] = "Tiago";

    ft_strrev(array1);
    printf("str - %s\n", array1);
}