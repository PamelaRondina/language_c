#include <stdio.h>
#include <typedef_string.h>

int main(void)
{
string name[10];

printf("Qual é o seu nome? ");
scanf("%s", name);
printf("Olá, %s.\n", name);
}