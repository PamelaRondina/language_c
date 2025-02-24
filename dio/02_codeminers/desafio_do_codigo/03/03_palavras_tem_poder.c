//funco que leia uma string
#include <unistd.h>

void    ler(char *palavra)
{
    int i;

    i = 0;
    while(palavra[i])
    {
        write(1, &palavra[i], 1);
        i++;
    }
}

int main()
{
    char a[] = "oi";

    ler(a);
}