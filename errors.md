# Errors

## 00 - Segmentation Fault

O programa tenta acessar uma parte da memória que não deveria.

### 00.00 - Utilizar ponteiro para uma string

- com `printf`:

Nesse caso, `name` não aponta para um espaço válido na memória onde a string pode ser armazenada.

```c

int main(void)
{
    char *name;

    printf("Qual é o seu nome? ");
    scanf("%s", name);
    printf("Olá, %s\n", name);

}
```

> **Ajuste**

Alocar espaço na memória: `char name[50];`

```c
int main(void)
{
    char name[50];

    printf("Qual é o seu nome? ");
    scanf("%s", name);
    printf("Olá, %s\n", name);
}
```

----------------------------------------

## 01 Stack smashing detected 

### 01.00 - IOT instruction (Estouro de Buffer Overflow)

**(Quebra de Pilha Detectada)**

Ocorreu uma sobrescrita de memória, geralmente por estouro de buffer (buffer overflow): declarar um array pequeno demais para armazenar a entrada do usuário.

```c
int main(void)
{
    char name[2];

    printf("Qual é o seu nome? ");
    scanf("%s", name);
    printf("Olá, %s.\n", name);
}

Retorno
Qual é o seu nome? Pam
Olá, Pam.
*** stack smashing detected ***: terminated
[1]    158472 IOT instruction (core dumped)  ./a.out
```

> Ajuste

- Definir tamanho do array: `char name[10];` 
- Definri tamanho de caracteres que devem ser recebidos pelo usuário `scanf("%9s", name);`

```c
int main(void)
{
    char name[10];

    printf("Qual é o seu nome? ");
    scanf("%9s", name);
    printf("Olá, %s.\n", name);
}
```
------------------------

## 02 Conversão implícita de tipos

Atribuir um tipo de dado a outro tipo sem uma conversão explícita: entregar dois inteiros (como argumento) e esperar como retorno um float.

```c
#include <stdio.h>

int main(void)
{
    int i = 50;
    int j = 2;
    float result;

    result = (float) i / (float) j;
    printf("%.2f\n", result);

    return (0);
}
```

---------------------------------------

Error | Dado | Erro | Ajuste
-|-|-|-
143869 Segmentation Fault | char | `char *name;` |  `char name[50];` // Alocar espaço para 50 caracteres  |
158472 IOT instruction | char | `scanf("%s", name);` | `scanf("%9s", name);`