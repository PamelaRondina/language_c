#include <stdio.h>

int main()
{
    int n;

    printf("Escolha um número: ");
    scanf("%d", &n);
    
    while(n < 1)
    {
        printf("Escolha outro número: ");
        scanf("%d", &n);  
    }
    printf("Seu número é %d.\n", n);
}

/*
usuário escolhe um número, enquanto ele não for positivo se repete*/