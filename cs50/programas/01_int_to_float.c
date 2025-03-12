#include <stdio.h>

int main(void)
{
    int i = 50;
    int j = 2;
    float result;

    result = (float) i / (float) j;
    printf("%.2f\n", result);

    return (0);
}