#include <stdio.h>

int sum(int num1, int num2)
{
    int a;
    int b;
    int result;

    a = num1;
    b = num2;
    result = a + b;

    return (result);
}

int main(int)
{
    sum(12, 5);
}
