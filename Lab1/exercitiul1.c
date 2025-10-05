#include <stdio.h>

int main()
{
    unsigned int a = 1;
    char *ptr = (char *)&a;
    if (*ptr == 1)
    {
        printf("Little endian");
    }
    else
    {
        printf("Big endian");
    }
    return 0;
}