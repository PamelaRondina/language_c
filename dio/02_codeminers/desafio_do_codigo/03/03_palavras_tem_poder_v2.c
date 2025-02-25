#include <stdio.h>
#include <string.h>
#include <unistd.h>

// Função que recebe uma string e inverte a ordem das letras.
void inverter(char *str) {
  // TODO: Implemente a lógica para inverter a "palavra".
    int i;

    i = 0;
    while (str[i])
        i++;
    i--;
    while (i >= 0)
    {
      write(1, &str[i], 1);
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
  //printf("%s", str);

  return (0);
}