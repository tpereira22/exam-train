#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

int main(void)
{
    char str1[5] = "olaa";
    char str2[5] = "olaw";

    printf("int - %d\n", ft_strcmp(str1, str2));

}