#include <stdio.h>
#include <unistd.h>

//faça um programa que calcule a media de dois valores recebidos pelo terminal

int main()
{
    float num1, num2, results;

    printf("The first number is: \n");
    scanf("%f", &num1);

    printf("The second number is: \n");
    scanf("%f", &num2);

    results = (num1 + num2) / 2;
    printf("%.2f", results);

    return (0);
}
