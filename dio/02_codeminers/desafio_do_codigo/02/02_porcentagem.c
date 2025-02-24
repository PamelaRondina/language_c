#include <stdio.h>

//Com função

/*int percent(int cap, int perc)
{
    return (cap * perc/100 + cap);

}

int main()
{
    printf("Resultado: %d\n", percent(100, 20));
    printf("Resultado: %d\n", percent(50, 10));
    printf("Resultado: %d\n", percent(200, 50));
}*/

//com int main e receber dados pelo terminal
int main()
{
    int cap, perc;

    printf("Insira dois valores: ");
    scanf("%d %d", &cap, &perc);

    printf("%d\n", cap * perc/100 + cap);
    
    return (0);
}

