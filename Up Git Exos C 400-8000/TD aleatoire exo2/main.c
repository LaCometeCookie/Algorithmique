#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int min =0, max =0, result =0;
    do{
        printf("Veuillez saisir le minimum :\n");
        scanf("%d", &min);
        fflush(stdin);
        printf("Veuillez saisir le maximum :\n");
        scanf("%d", &max);
    } while(max < min);

    result =getRandomInteger(min, max);
    printf("Nbr aleatoire entre %d et %d : %d\n", min, max, result);
    return 0;
}

int getRandomInteger(int min, int max){
    int randNombre =0;
    randNombre = min +rand()%(max -min);
    return randNombre;
}
