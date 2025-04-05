#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int *n = malloc(4 * sizeof(int));

    n[0] = 5;  
    n[1] = 8;
    n[2] = 10;
    n[3] = 15;
    n[4] = 20;

    int *m = n + 1;

    //printf("%d", n[4]);
    printf("%d\n", *(n + 0));
    printf("%p\n", m);
    printf("%d\n", *(n + 2));
    printf("%d\n", *(n + 3));
    printf("%d\n", *(n + 4));


    free(n);
}
