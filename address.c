#include <stdio.h>

int main(void)
{
    int n = 50;
    printf("%i\n", n);
    printf("%p\n", &n);
    printf("%i\n", *&n);
}