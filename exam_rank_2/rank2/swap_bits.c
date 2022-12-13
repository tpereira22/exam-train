#include <stdio.h>

unsigned char   swap_bits(unsigned char octet)
{
    return ((octet >> 4) | (octet << 4));
}

int main(void)
{
    char c = "T";

    printf("a - %c\n", swap_bits(a);)
}