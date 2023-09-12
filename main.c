#include <stdio.h>

int main()
{
    float a, b, c;
    float somme;
    float moyenne;

    printf("Entrer les trois nombres\n");
    scanf("%f %f %f", &a, &b, &c);

    somme = a + b + c;

    printf("La somme de ces nombres est %.2f\n", somme);

    moyenne = somme / 3;

    printf("La moyenne est %.2f\n",moyenne);

    return 0;
}
