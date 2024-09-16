#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( int argc, char** argv)
{
    int nbrUser =0, nbrCible =0, essais =0, Max=100, Min=0; // Variables
    srand(time(NULL));                                    /// Initialisation de l'horloge
    printf("Bienvenue dans le jeu du plus ou moins !\n\n");

    do { // Blindage
    printf("Veuillez saisir le minimum :\n"); /// Demande du minimum
    scanf("%d", &Min);
    fflush(stdin);
    printf("Veuillez saisir le maximum :\n"); /// Demande du maximum
    scanf("%d", &Max);
    } while(Min > Max); // fin blindage

    nbrCible =(rand() % (Max -Min +1)) +Min;  /// Generation de l'aleatoire

    do
    {
        printf("\nQuel est le nombre ? "); /// Affiche la demande du nombre à l'utilisateur
        scanf("%d", &nbrUser); // Saisie de l'essai de l'utilisateur
        essais++; // Crédite essai à 1

        if (nbrCible >nbrUser)
            printf("\nC'est plus !\n");
        else if (nbrCible <nbrUser)
            printf("\nC'est moins !\n");
        else
            printf ("\nVictoire ! Le nombre mystere etait bien %d !\nVous avez trouve en %d essais !\n", nbrCible, essais);
    } while (nbrUser != nbrCible);

    return 0;
}
