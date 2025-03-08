#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char name[11];
    char pergunta[] = "Qual é o seu nome? ";
    char saudacao[] = "Olá, ";

    //write(1, "Qual é o seu nome? ", 19);
    
    write(1, &pergunta, ft_strlen(pergunta)); //exibe no terminal a pergunta
    scanf("%10s", name);

    write(1, &saudacao, ft_strlen(saudacao)); // Olá, 
    write(1, &name, ft_strlen(name)); // nome digitado pelo terminal
    write(1, ".\n", 2); 

    return (0);
}

//Função strlen: conta quantos caracteres possui uma string.
int ft_strlen(char *str)
{
    int cont;

    cont = 0;
    while (str[cont] != '\0')
        cont++;
    return(cont);
}

