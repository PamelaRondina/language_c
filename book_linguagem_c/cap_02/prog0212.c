#include "../include/teste_biblioteca.h"

int main()
{
    char ch1, ch2;
    printf("Introduza um caracter: " );
    scanf("%c", &ch1);
    printf("Introduza outro caracter: ");

    //espaco em branco no proximo scanf( "%c", ch2), para nao gerar erro! Sem o espaco ficar'a assim:

    //Introduza outro caracter:Os caracteres introduzidos foram 'a' e '
//'

    //Esse espaco em branco faz com que a funcao leia e ignore todos os \n, \t e '  '

    scanf(" %c", &ch2);
    printf("Os caracteres introduzidos foram '%c' e '%c'\n", ch1, ch2);
}