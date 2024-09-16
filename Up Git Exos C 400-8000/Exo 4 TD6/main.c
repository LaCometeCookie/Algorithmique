#include <stdio.h>
#include <stdlib.h>

void calculTableau(int tableau[3], int *somme, int *mutiple);

int main()
{
    int tableau[3], a =0, somme =0, multiple =0;
    printf("Veuillez saisir 3 entiers pour remplir le tableau :\n");
    for (int i =0; i <3; i++){
        fflush(stdin);
        scanf("%d", &a);
        tableau[i] =a;
    }

    calculTableau(tableau[3], &somme, &multiple);
    printf("La somme du tableau vaut : %d\n La multiplication vaut : %d\n", somme, multiple);
    return 0;
}

void calculTableau(int tableau[3], int *somme, int *multiple){
    int a =0, b =0;
    printf("On commence l'addition\n");
    for (int i =0; i <3; i++){
        a = (a + tableau[i]);
    }
    printf("On commence la multiplication\n");
    for (int u =0; u <3; u++){
        b = (b * tableau[u]);
    }

    *somme =a;
    *multiple =b;
}
