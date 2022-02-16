#include <stdio.h>
#include <stdlib.h>

void divisionProcedure(int a, int b, float *sortie, float *reste);
int divisionFonction(int a, int b, float *sortie);

int main()
{
    int entierA =0, entierB =0;
    float sortie =0, reste =0, sortie2 =0, reste2 =0;

    printf("Veuillez saisir deux entiers :\n");
    fflush(stdin);
    scanf("%d", &entierA);
    fflush(stdin);
    scanf("%d", &entierB);

    divisionProcedure(entierA, entierB, &sortie, &reste);
    printf("Le resultat de la division est : %f\nEt le reste est : %f\n", sortie, reste);

    reste2 =divisionFonction(entierA, entierB, &sortie2);
    printf("Le resultat de la division est : %f\nEt le reste est : %f\n", sortie2, reste2);
    return 0;
}

void divisionProcedure(int a, int b, float *sortie, float *reste){
    *sortie =(a / b);
    *reste =(a % b);
}

int divisionFonction(int a, int b, float *sortie){
    float reste =0;
    *sortie =(a / b);
    reste =(a % b);
    return reste;
}
