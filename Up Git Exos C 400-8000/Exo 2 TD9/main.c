#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taille =0, val =0, moyenne =0;
    printf("Veuillez rentrer le nombre de notes a saisir : ");
    scanf("%d", &taille);
    int *tableau = (int*) malloc(taille * sizeof(int));
    for (int i =0; i <taille; i++){
        printf("Saisir la note : ");
        scanf("%d", &val);
        tableau[i] =val;
    }
    for (int i =0; i <taille; i++){
        moyenne = moyenne +tableau[i];
    }
    moyenne = moyenne /taille;
    printf("\nMoyenne : %d", moyenne);
    return 0;
}
