# CS50

## Tarefas

Comandos [C](link)

- Recriar um componente do jogo do Super Mário;
- Construir um aplicativo web 'CS Finance': permitirá ao usuário comprar e vender ações virtualmente;
- Projeto final.

### Módulo 00 - Scratch

**O que é Ciencia da Computação?**

Resolucão de problemas.


`(entradas) input --> ciência da computação --> (saídas) output`

**Representando números**

Sistema | Números
-|-
Unário | Cada dígito representa um valor. Ex: contar com os dedos
Decimal (base 10) | 0 1 2 3 4 5 6 7 8 9
Binário **bit** (base 2) | 0 1 (utilizado pelos computadores)

Dentro dos computadores existem os **transitores**, que pode ser ligados e desligados para representar valores:

128 | 64 | 32 | 16 | 8 | 4 | 2 | 1 | (255) Decimal 
-|-|-|-|-|-|-|-|- 
0 | 0 | 0 | 0 | 0 | 0 | 0 |  0 | -->  0
0 | 0 | 0 | 0 | 0 | 0 | 0 |  1 | -->  1  
0 | 0 | 0 | 0 | 0 | 0 | 1 |  0 | -->  2  
0 | 0 | 0 | 0 | 0 | 0 | 1 |  1 | -->  3  
0 | 0 | 0 | 0 | 0 | 1 | 0 |  0 | -->  4   
0 | 0 | 0 | 0 | 0 | 1 | 0 |  1 | -->  5    
0 | 0 | 0 | 0 | 0 | 1 | 1 |  0 | -->  6
0 | 0 | 0 | 0 | 0 | 1 | 1 |  1 | -->  7
0 | 0 | 0 | 0 | 1 | 0 | 0 |  0 | -->  8
0 | 0 | 0 | 0 | 1 | 0 | 0 |  1 | -->  9
0 | 0 | 0 | 0 | 1 | 0 | 1 |  0 | -->  10

 **Algoritmos**

 Instruções passo a passo para resolver problemas, ex: uma receita de bolo.

 ----------

 ### Módulo 01 - C

**Hello, World!**

No terminal:

`code hello.c`  -   criar um arquivo.c
`make hello`    -   compilador, criar um arquivo executável para que o computador possa ler;
`./hello`       - executa o programa.

 ```c
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    printf("Hello, World!\n");
    write(1, "Hello, World!\n", 14);
}
 ```

**Funções e Argumentos**

Funções: pequenas ações para utilizar em nosso programa
Argumentos: entradas para as funções.

    ler_string(char *s);

- Efeitos colaterais: impresso na tela;
- Valores de retorno: um valor que é passado de volta ao nosso programa que podemos usar ou armazenar para mais tarde.




