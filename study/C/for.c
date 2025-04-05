#include <stdio.h>

/*Ex: 01
int main()
{
    for (int i = 0; i <= 4; i++)
        printf("%d\n", i);
    return (0);

}*/

int main()
{
    int pontos_de_vida = 0;

    for (int i = 0; i <= 10; i++)
    {
        pontos_de_vida += 1;
        printf("Tomou porção mágica %d\n", i);
    }

}