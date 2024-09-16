#include <stdio.h>
#include <stdlib.h>

void inversion(int *a, int *b);

int main()
{
    int entier1 =0, entier2 =0;

    printf("Veuillez saisir deux entier :\n");
    fflush(stdin);
    scanf("%d", &entier1);
    fflush(stdin);
    scanf("%d", &entier2);

    inversion(&entier1, &entier2);

    printf("Entier 1 =%d\nEntier 2 =%d\n", entier1, entier2);
    return 0;
}

void inversion(int *a, int *b){
    int tampon = *a;
    *a = *b;
    *b = tampon;
}
