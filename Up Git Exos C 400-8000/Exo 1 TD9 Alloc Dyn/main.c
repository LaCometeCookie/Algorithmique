#include <stdio.h>
#include <stdlib.h>

void exo1(int *adresse, int *taille){
    printf("Veuillez saisir une taille pour votre tableau : ");
    scanf("%d", taille);
    int* tableau = calloc(*taille, sizeof(int));
    *adresse = tableau;
}

int main()
{
    int taille =0, adresse =0;
    exo1(&adresse, &taille);
    printf("Taille du tableau : %d \nAdresse du tableau : %d", taille, adresse);
    free(adresse);
    return 0;
}
