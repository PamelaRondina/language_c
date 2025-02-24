#include <stdio.h>

/*Neste programa calcularemos a área e o perímetro de um retângulo
retângulo:  rectangle
áre:        area
peímetro:   perimeter
base:       base
altura:     height*/

//Primeira função: cálculo da área.
int  area(int base, int height)
{
    int a, b, results;

    a = base;
    b = height;
    results = a * b;

    printf("The value of the base %d, and the value of de height %d.\n", a, b);
    return (results);
}

//Segunda função: cálculo do perímetro. 
//recebe dois inteiros e devolve um float
float  perimeter(int base, int height)
{
	int a, b;
	float results;

	a = base;
	b = height;
	results = (float)(2 * (a + b));

	return (results);

}

int main()
{
    //a funcao pode ser chamada dentro do printf porque dentro dela está retornando o resultado.
    printf("The value of the area of the rectangle: %d\n", area(11, 7));
    printf("\%% The value of the perimeter of the  rectangle: %.2f\n", perimeter(11, 7));
}
