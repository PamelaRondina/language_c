#include <stdio.h>

//A soma dos números.

int main()
{
    int num1, num2, results;

    printf("Write the first number: \n");
    scanf("%d", &num1);

    printf("Write the second number: \n");
    scanf("%d", &num2);

    results = num1 + num2;
    printf("The sum is: %d\n", results);

    return (0);
}