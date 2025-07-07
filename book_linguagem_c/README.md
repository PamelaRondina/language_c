## Capítulo I - O meu primeiro programa

**Caracteres especiais - tabela ASCII**

Código | Descricao 
-|-
\7 | Bell (sinal sonoro do computador)
\a | Bell (sinal sonoro do computador)
\b | BackSpace
\n | Nem line
\r | Carriage Return
\t | Tabulaçao Horizontal
\v | Tabulaçao Vertical
\\ | o proprio \
\\' | Aspas simples
\\" |
\\? | 
\ooo | código ASCII em octal
%% | %
/* Comentários */ |Comentários

**Resumo Capítulo I**

- Um programa inicia com `main()`, e deve estar em todas os programas em C;
- Um `bloco` é formado e delimitado por um conjunto de `{}`;
- Cada instrução eeve ser seguida por `;`;
- Linhas iniciadas por `#` não são C, enão necesitam do `;` no final;
- Para imprimir ou utilizar caracter especial, no iníxio incluit `\`;
  Para comentário utilizar `/* texto */`, e nao existe comentário dentro de comentário.

## Capítulo II - Tipos de Dados Básicos

Tipo | Descricao | Bytes | Valor 
-|-|-|-
%hd | short int ou short | 2 | -32.768 até 32.767
%d ou %i | int | 4 | -2.147.483.648 até 2.147.483.647
%ld | long int ou long | |
%hu | unsogned short int (short inteiro positivo)| | |
%u | unsigned int (inteiro positivo)| | positivos 
%lu | unsigned long int (inteiro positivo) | | 
%f ou %e ou %E| float | 4 ||
%f ou %e ou %E | double | 8 | | 
%c | char | 1 | caracteres possiveis 256, possui 8 bits 



**Operadores Logicos**
Operador | Significado | Exemplo
-|-|-
&& | AND (E logico) | x>=1 && x<=19
 | OR (OU logio) | x==1 x==2
!|NOT(Negacao logica)|! Continuar

&& = Verdadeiro quando ambas as condicoes sao verdadeiras;

Operador|
-|
< <= > >=
== !=
&&
||
?: 

