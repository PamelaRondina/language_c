#include <stdio.h>

int main (void)
{
    char *s = "Hi!";
    char t[] = {'O', 'i', '!', '\0'};
    char u[] = "Ei!";
    
    printf("%s\n", s); //Hi

    printf("%s\n", t); //Oi!

    printf("%s\n", u); //Ei!
    //printf("%c\n", *s);

    /*for(int i = 0; i < 7; i++)
    {
        //printf("%c\n", t + i);
        printf("%c\n", *(t + i) );
    }*/
}
