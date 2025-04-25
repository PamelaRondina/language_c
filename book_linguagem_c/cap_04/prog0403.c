//Escreva um programa que escreva a tabuada do 5

#include "../include/teste_biblioteca.h"

int main(void)
{
    int i;
    int j;

    i = 0;
    j = 5;
    while (i <= 10)
    {
        printf("%2d * %d = %2d\n", i, j , (i * j));
        i++;
    }

    return (0);
}

/*alinhado pois utilizei %2d

0 * 5 =  0
1 * 5 =  5
2 * 5 = 10
3 * 5 = 15
4 * 5 = 20
5 * 5 = 25
6 * 5 = 30
7 * 5 = 35
8 * 5 = 40
9 * 5 = 45
10 * 5 = 50
*/