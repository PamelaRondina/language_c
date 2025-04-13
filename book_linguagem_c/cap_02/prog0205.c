// Escreva um programa que indique qual o numero de
// bytes que ocupam todos os tipos basicos em C

#include <stdio.h>

int main(void)
{
    printf("int: \t%lu\n", sizeof(int));
    printf("char: \t%lu\n", sizeof(char));
    printf("float: \t%lu\n", sizeof(float));
    printf("double: %lu\n", sizeof(double));
    printf("long: \t%lu\n", sizeof(long));
}