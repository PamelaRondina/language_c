#include <stdio.h>
#include <unistd.h>

int main() {
  int temp;

  scanf("%d", &temp);
  
  // TODO: Crie as condições de acordo com as saídas deste desafio.
    if (temp <= 18)
        write(1, "Baixa\n", 6);
    else if (temp >= 24)
        write(1, "Alta\n", 5);
    else
        write(1, "Ideal\n", 6);
  return (0);
}