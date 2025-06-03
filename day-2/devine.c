#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int essai = 0;
    int secret = 0;
    int compteur = 0;

    srand(time(NULL));
    secret = rand() % 100 + 1;

    printf("Trouver le nombre entre 1 et 100: \n");

    while (essai != secret ) {
        printf("Entrez votre nombre: ");
        scanf("%d", &essai);
        compteur++;

        if(essai<secret)
            printf("TROPPPPP BAS \n");
        else if(essai>secret)
            printf("TROPPPPP HAUT \n");
        else
            printf("TA trouver en %d essais. \n", compteur);
        
    }
    return 0;
 }
