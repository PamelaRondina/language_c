#include <stdio.h>

int main()
{
    int bruto, benef, porc;
    float resultado;

    printf("O valor do saláro é: ");
    scanf("%d", &bruto);

    printf("O valor do benefício é: ");
    scanf("%d", &benef);

    if (bruto <= 1100)
        resultado = bruto - (bruto * 0.05) + benef;
    else if (bruto <= 2500)
        resultado = bruto - (bruto * 0.10) + benef;
    else 
        resultado = bruto - (bruto * 0.15)+ benef;
    printf("%.2f\n", resultado);
}