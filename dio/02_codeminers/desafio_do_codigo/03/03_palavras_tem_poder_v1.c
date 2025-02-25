#include <stdio.h>
#include <string.h>
#include <unistd.h>

// Função que recebe uma string e inverte a ordem das letras.
void inverter(char *str) {
  // TODO: Implemente a lógica para inverter a "palavra".
    int     i, j;
    char    temp;

    i = 0;
    j = 0;
    while (str[i])
        i++;
    i--;
    while (i >= j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j++;
        i--;
    }
}

int main() {
  char str[100];

  // Lê a palavra a ser invertida do usuário.
  scanf("%s", str);

  // Chama a função que inverte a palavra.
  inverter(str);

  // Imprime a palavra invertida na tela.
  printf("%s", str);

  return (0);
}