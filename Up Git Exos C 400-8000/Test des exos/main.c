#include <stdio.h>
#include <stdlib.h> //EXERCICE 401

int main()
{
    printf("Bonjour\n");
    printf("Saisissez l'annee en cours :\n");
    int annee =0;
    scanf("%d", &annee);
    printf("L'annee en cours est %d\n", annee);
    int anneeOp =0;
    anneeOp = 0 -annee;
    printf("Son oppose est : %d\n\n", anneeOp);
    printf("Saisir 3 entiers\n");
    int note1 =0, note2 =0, note3 =0, moyenne =0;
    scanf("%d %d %d", &note1, &note2, &note3);
    moyenne = (note1 + note2 + note3) /3;
    printf("Leur moyenne est : %d", moyenne);
    return 0;
}
