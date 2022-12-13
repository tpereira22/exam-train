#include <stdio.h>

char    *ft_strpbrk(const char *s1, const char *s2)
{
    int i;

    while (*s1)
    {
        i = 0;
        while (s2[i])
        {
            if (s1[i] == s2[i])
                return ((char *)s1);
            i++;
        }
        s1++;
    }
    return (NULL);
}

int main(void)
{
    char array1[5] = "Tiago";
    char array2[3] = "abc";

    printf("%s\n", ft_strpbrk(array1, array2));
}