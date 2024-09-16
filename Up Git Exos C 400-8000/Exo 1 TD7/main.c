#include <stdio.h>
#include <stdlib.h>

int comptageCarac(char chaine[], char carac);

int main()
{
    char chaine[50]; char carac =0; int nombre =0;
    printf("Veuillez saisir une chaine de caracteres :\n");
    gets(chaine);

    printf("\nVeuillez saisir le caractere a compter :\n");
    scanf("%c", &carac);

    nombre =comptageCarac(chaine, carac);
    printf("\nIl y a %d fois le caractere %c dans la chaine\n", nombre, carac);
    return 0;
}

int comptageCarac(char chaine[], char carac){ // On aurait pu faire (char *chaine, char carac)
    int nbr =0;
    for (int i =0; i <50; i++){
        if (chaine[i] == carac){
            nbr = nbr +1;
        }
    }
    return nbr;
}
