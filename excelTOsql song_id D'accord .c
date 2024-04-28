#include <stdio.h>
#include <string.h>
#define N 2000


char donnees[N] = "A LA CLAIRE FONTAINE#HEY\0";
char code[N]= "";

void debutCode () {
    char debutCode [N] = "insert into song_1 (song_id, song_title, beneficiaries, beneficiaires, difficulty_level, niveau_difficulte, country_origin, pays_origine, language_origin, langue_origine, musical_style, style_musical, song_type, type_morceau) values ('\0" ;
    strcat(code,debutCode);
    // printf("%s",code);
}

/*
 song_id,
 song_title,
 beneficiaries,
 beneficiaires,
 difficulty_level,
 niveau_difficulte,
 country_origin,
 pays_origine,
 language_origin,
 langue_origine,
 musical_style,
 style_musical,
 song_type,
 type_morceau
 */



int longueurCode () {
    // Trouver la fin de la chaîne
    int longueur = 0;
    while (code[longueur] != '\0') {
        longueur++;
    }
    return longueur;
}

int longueurChaine (char chaine[] ) {
    // Trouver la fin de la chaîne
    int longueur = 0;
    while (chaine[longueur] != '\0') {
        longueur++;
    }
    return longueur;
}

int song_id () {
    int i = 0;
    char lettre = donnees[i];
    int k = longueurChaine(donnees);

    for (i = 0; lettre != '#' ; i++) {
        lettre = donnees[i];
        // printf("%c", lettre);
        int j = longueurCode ();
        code[j] = lettre ;
            }
    int j = longueurCode ();
    code[j-1] = '\0'; // Assurez-vous de terminer la chaîne avec le caractère nul
    
    for (int l = 0; l < k ; l++) {
        // printf("%s   Donnees = %c  l = %d \n",donnees,donnees[l],l);
        
         if (donnees[0] == '#') {
             for (i = 0; i < k ; i++) {
                 donnees[i] = donnees[i + 1];
             }
            // printf("donnees a la fin = %s\n",donnees);

            return 0;
        }
        for (i = 0; i < k ; i++) {
            donnees[i] = donnees[i + 1];
        }
    }
    // printf("donnees a la fin = %s\n",donnees);
    return 0;
}

int main () {
    debutCode();
    song_id();
    
    printf("\n");
    printf("\n");

    
    printf("***************************\n");
    printf("\n");
    printf("\n");

    printf("Code : %s",code);
    printf("\n");
    printf("\n");

    printf("Donnees : %s", donnees);
    
    printf("\n");
    printf("\n");
    printf("\n");
    printf("***************************\n");
    
    printf("\n");
    printf("\n");

    return 0;
    }
