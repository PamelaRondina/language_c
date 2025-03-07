
#include <typedef_string.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

string get_string(string msn)
{
    char *str;
    printf("%s", msn);
    scanf("%s\n", str);
    str = malloc((strlen(msn)) * sizeof(char));

    return (*str);
}

int main(void)
{
    string text = get_string("Qual é o seu nome? ");
    printf("%s", text);
}


/*

1 - A main passa uma pergunta para o get_string
2 - O get_string recebe a pergunta e imprime na tela (contar a quantidade da string )
3 - scanf (receber a resposta do usuario)


*/