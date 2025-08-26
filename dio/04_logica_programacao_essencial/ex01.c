
//Calcule a media aritmética de 4 notas: 5. 7. 10. 3.

#include <stdio.h>

int main()
{
    int n1 = 5;
    int n2 = 7;
    int n3 = 10;
    int n4 = 3;
    float media = n1 + n2 + n3 + n4 / 4;

    printf("NOTAS\n");
    printf("\tnota 1: %d\n\tnota 2: %d\n\tnota 3: %d\n\tnota 4: %d\n ", n1, n2, n3, n4);
    printf("\tmedia: %f\n", media);
}