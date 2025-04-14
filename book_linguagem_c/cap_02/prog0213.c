//Introduza um caracter e seu valor da tabela ASCII

#include "../include/teste_biblioteca.h"

int main(void)
{
    char c;

    printf("Escolha um caracter: ");
    scanf("%c", &c);

    //CASTING = (int).

    printf("O caracter escolhido foi '%c' e seu valor na tabela ASCII '%d'.\n", c, (int)c);
}
