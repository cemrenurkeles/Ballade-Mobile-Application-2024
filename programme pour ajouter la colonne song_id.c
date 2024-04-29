#include <stdio.h>
#include <string.h>
#define N 10000
#define ROWS 204


char donnees[N] = "";

char code[N]= "";

void debutCode () {
    char debutCode [N] = "\ninsert into song_1 (song_id) values ('" ;
    strcat(code,debutCode);
    // printf("%s",code);
}

void song_id (int i) {
    // Utilisation de sprintf() pour convertir l'entier en une chaîne de caractères
    // et le concaténer à la chaîne existante
    sprintf(code + strlen(code), "%d", i);    // printf("donnees a la fin = %s\n",donnees);
}

void finCode () {
    char finCode [N] = "');" ;
    strcat(code,finCode);
}

void boucleCode() {
    int i = 1 ;
    for (i = 1; i<= ROWS ; i++){
        debutCode();
        song_id(i);
        finCode();
        
    }
}

int main () {
    
    boucleCode();
    
    printf("\n");
    printf("\n");

    
    printf("***************************\n");
    printf("\n");
    printf("\n");

    printf("Code : %s",code);
    printf("\n");
    printf("\n");

    // printf("Donnees : %s", donnees);
    
    printf("\n");
    printf("\n");
    printf("\n");
    printf("***************************\n");
    
    printf("\n");
    printf("\n");

    return 0;
    }

