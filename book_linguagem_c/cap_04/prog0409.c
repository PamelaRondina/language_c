//Escreva um programa que apresente um menu co as opcoes
// Clientes | Fornecedores | Encomendas | Sair
// O programa deve apresentar a opcao escolhida pelo utilizador ate que o utilizador deseje sair

#include "../include/teste_biblioteca.h"

int main(void)
{
    char opcao;

    do
    {
        printf("\tMENU PRINCIPAL\n");
        printf("\n\n\t\tClientes");
        printf("\n\n\t\tFornecedores");
        printf("\n\n\t\tEncomendas");
        printf("\n\n\t\tSair");
        printf("\n\n\n\t\tOpcao: ");
        scanf(" %c", &opcao);
        fflush(stdin); // Limpar o buffer do teclado
        switch(opcao)
        {
            case 'c':
            case 'C': puts("Opcao CLIENTES"); break;
            case 'f':
            case 'F': puts("Opcao FORNCEDORES"); break;
            case 'e':
            case 'E': puts("Opcao ENCOMENDAS"); break;
            case 's':
            case 'S': break; //Nao faz nada
            default: puts("Opcao invalida!!!");
        }
        getchar(); //Parar a tela
    }
    while (opcao != 's' && opcao != 'S');
}