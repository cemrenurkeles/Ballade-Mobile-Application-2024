#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 100000
#define ROWS 203


char donnees[N] = "Chanson enfantine, Chanson médiévale, Chanson traditionnelle # Chant traditionnel, Sépharade # Berceuse, Chant traditionnel # Chanson enfantine, Chant traditionnel, Comptine, Pastorale # Chanson enfantine, Comptine # Chant traditionnel # Chant traditionnel # Chant traditionnel # Musique traditionnelle # Chant traditionnel # Chant traditionnelle # Chant traditionnel # Chanson enfantine, Chanson traditionnelle, Klezmer # Chanson engagée # Chant de la Renaissance, Chant polyphonique, Danse traditionnelle, Pavane # Chant traditionnel, Sevdalinka # Berceuse # Chant traditionnel, Romane Chave, Tsigane # Chanson # Chant traditionnel # Musique traditionnelle, Chant traditionnel # Chant traditionnel # Comptine # Musique traditionnelle, Chant traditionnel # Musique traditionnelle, Chant traditionnel # Chant traditionnel # Chant traditionnel, Cumbia # Danse traditionnelle, Musique traditionnelle # Musique traditionnelle # Danse traditionnelle, Musique traditionnelle # Comptine # FALSE # FALSE # Chanson traditionnelle # Chanson enfantine # Danse traditionnelle, Musique traditionnelle # Danse de recrutement, Danse traditionnelle, Musique traditionnelle, Verbunkos # Danse traditionnelle, Musique traditionnelle # Danse traditionnelle, Musique traditionnelle # Danse traditionnelle, Musique celtique, Musique traditionnelle # Danse traditionnelle, Musique traditionnelle # Danse traditionnelle, Kolo, Musique traditionnelle # Chant traditionnel # Chant traditionnel # Berceuse, Chant traditionnel # Chant traditionnel # Chant traditionnel, Romane Chave, Tsigane # Chant traditionnel, Tryndytchka # Chanson française # Musique traditionnelle # Chant traditionnel # Chant traditionnel # Chant traditionnel, Romane Chave, Tsigane # Chant traditionnel # Cumbia, Chant traditionnel # Chanson traditionnelle, Comptine # Chant traditionnel # Comptine # FALSE # FALSE # FALSE # FALSE # Chanson enfantine, Comptine # Chant traditionnel, Musique celtique # Klezmer, Musique traditionnelle # Chanson enfantine, Comptine # Danse traditionnelle, Musique traditionnelle # Canon, Chant polyphonique # Chant traditionnel, Chant médiéval # Chant traditionnel, Starogradska # FALSE # Chant traditionnel, Klezmer # Musique classique, Musique romantique, Chant # Chanson enfantine, Comptine # Chant traditionnel # Chanson enfantine, Comptine # Chanson enfantine, Comptine # Chanson enfantine, Comptine # Chant traditionnel # Comptine # Chant traditionnel # Chanson enfantine, Comptine # Musique traditionnelle # Musique traditionnelle # Danse traditionnelle, Kasatchok, Musique traditionnelle # Musique traditionnelle # Chant traditionnel, Danse traditionnelle, Kolo, Musique traditionnelle # Musique traditionnelle # Comptine # Chanson enfantine # Pop, Rock # Chant traditionnel, Musique traditionnelle # Chant, Musique classique, Musique romantique # Musique celtique # Musique traditionnelle # Musique traditionnelle # Musique traditionnelle # Canon, Chanson enfantine, Chanson traditionnelle # Comptine # Musique traditionnelle # Chanson française # Chanson enfantine # Chanson enfantine # Musique traditionnelle, Chant traditionnel # Chanson française # Chanson enfantine # Musique traditionnelle, Chant traditionnel # Musique traditionnelle, Chant traditionnel # Musique celtique # Musique traditionnelle, Chant traditionnel # Chant traditionnel # Musique celtique # Musique traditionnelle, Musique tsigane, Romane Chave # Chanson enfantine, Comptine # Chant traditionnel, Musique traditionnelle # Chant traditionnel, Musique traditionnelle, Sevdalinka # Chant traditionnel, Musique traditionnelle # Chant traditionnel, Musique traditionnelle # Chant traditionnel, Musique traditionnelle # Chanson française # Chanson enfantine, Comptine # Chant de Noël # Chanson enfantine, Comptine # Musique traditionnelle, Chant traditionnel # Chanson enfantine, Comptine # Chant traditionnel, Musique traditionnelle, Musique tsigane, Romane Chave # Chanson enfantine, Comptine # Chant traditionnel, Musique traditionnelle # Chanson enfantine, Comptine # Chanson napolitaine # Chant traditionnel, Musique traditionnelle # Chant traditionnel, Musique traditionnelle # Reggae # Chant traditionnel, Musique traditionnelle, Musique tsigane, Romane Chave # Chanson enfantine, Chant traditionnel, Comptine, Musique traditionnelle # Musique traditionnelle # Chant traditionnel, Musique traditionnelle # Chant traditionnel, Musique traditionnelle # Klezmer # Chant traditionnel, Comptine, Musique traditionnelle, Rondeau # Danse traditionnelle, Kolo, Musique traditionnelle # Chant traditionnel, Musique traditionnelle # Chant traditionnel, Musique traditionnelle # Chant traditionnel, Musique traditionnelle # Chant traditionnel, Comédie musicale, Musique traditionnelle, Singspiegel # Musique de film, Pop # Bolero # Danse traditionnelle, Musique traditionnelle # Chant traditionnel, Danse traditionnelle, Musique traditionnelle # Chant traditionnel, Musique traditionnelle # Comptine # Rondeau, Musique traditionnelle # Musique traditionnelle, Musique tsigane, Romane Chave # Chanson enfantine, Comptine # Chant polyphonique # Chant traditionnel, Chanson engagée # Chanson enfantine, Comptine # Ballade, Chant traditionnel, Musique traditionnelle # Musique traditionnelle # Chant traditionnel, Musique traditionnelle # Chant de Noël, Chant traditionnel, Musique traditionnelle # Klezmer, Musique traditionnelle # Musique celtique, Musique traditionnelle # FALSE # Chanson enfantine, Comptine # Chanson engagée # Chant traditionnel, Musique traditionnelle # Musique traditionnelle, Sirba # Chant traditionnel, Musique traditionnelle, Sevdalinka # Ballad, Traditional music, Traditional song # Berceuse, Blues, Jazz, Opéra # Jazz, Jazz manouche, Swing, Valse # Pop, Jazz # Chanson française, Tango # Musique traditionnelle, Tarentelle # Chanson enfantine, Chant traditionnel, Comptine, Musique traditionnelle # Chanson enfantine, Comptine # Musique traditionnelle, Klezmer # Ballade, Musique traditionnelle, Chant traditionnel # Comptine # Chanson enfantine, Comptine # Klezmer, Musique traditionnelle # Chant traditionnel, Musique traditionnelle # Klezmer, Musique traditionnelle # Chanson enfantine, Comptine # Chanson enfantine, Comptine # Chanson enfantine, Comptine # Chanson enfantine, Comptine # Chant traditionnel, Musique traditionnelle # Chant traditionnel, Musique traditionnelle # Musique traditionnelle # Musique traditionnelle, Musique tsigane, Romane chave, Valse # Musique traditionnelle, Valse # Chant traditionnel, Musique traditionnelle # Chanson de Noël, Chanson enfantine, Comptine # Musique traditionnelle # Chant traditionnel, Danse de recrutement, Musique traditionnelle, Verbunkos # Chanson de Noël, Chanson enfantine # Flamenco, Rumba flamenca # Chanson enfantine, Comptine # Musique traditionnelle # Chant traditionnel, Musique traditionnelle # Blues, Jazz # Chant traditionnel, Musique traditionnelle # Klezmer, Musique traditionnelle # Chant traditionnel, Musique traditionnelle # Chant traditionnel, Musique traditionnelle # Danse traditionnelle, Kolo, Musique traditionnelle #";

char code[N]= "";

void debutCode () {
    char debutCode [N] = "\nupdate song_1 set \"style_musical\" ='" ;
    strcat(code,debutCode);
    // printf("%s",code);
}

// SI TU VEUX CHANGER LE SYMBOLE # TU DOIS CHANGER
// CETTE FONCTION
int nombreLettreAvantHashtag (char chaine[] ) {
    // Trouver nombreLettreAvantHashtag
    int longueur = 0;
    while (chaine[longueur] != '#') {
        longueur++;
    }
    longueur--; // pour ne pas compter le #
    return longueur;
}
int longueurCode () {
    // Trouver la fin de la chaîne
    int longueur = 0;
    while (code[longueur] != '\0') {
        longueur++;
    }
    return longueur;
}

int longueurDonnees () {
    // Trouver la fin de la chaîne
    int longueur = 0;
    while (code[longueur] != '\0') {
        longueur++;
    }
    return longueur;
}

void passageDonneesCode () {
    int i = 0;
    char lettre = donnees[i]; // On prend la première lettre
// POUR LONGUEUR CHAINE : JE VEUX LA LONGUEUR DE
    // LETTRES AVANT #
    int n = nombreLettreAvantHashtag(donnees);
    int m = longueurCode ();
    for (i=0; i <= n; i++){
        code[m+i] = donnees[i];
    }
}

void idToChar (int i) {
    // Utilisation de sprintf() pour convertir l'entier en une chaîne de caractères
    // et le concaténer à la chaîne existante
    sprintf(code + strlen(code), "%d", i);    // printf("donnees a la fin = %s\n",donnees);
}

void passageDonneesSongID (int i) {
    char songID [N] = "\' where song_id = " ;
    strcat(code,songID);
    idToChar(i);
}

void finCode() {
    char finCode [N] = ";" ;
    strcat(code,finCode);

}


int longueurChaine (char chaine[] ) {
    // Trouver la fin de la chaîne
    int longueur = 0;
    while (chaine[longueur] != '\0') {
        longueur++;
    }
    return longueur;
}

int supprimerJusquAHashtag (){
    int i = 0;
    int k = longueurChaine(donnees);

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

int supprimerEspaceAvantLettre(){
    int i = 0;
    int k = longueurChaine(donnees);


    for (int l = 0; l < k ; l++) {
        // printf("%s   Donnees = %c  l = %d \n",donnees,donnees[l],l);
        
         if (isalpha(donnees[0])) {
            return 0;
        }
        for (i = 0; i < k ; i++) {
            donnees[i] = donnees[i + 1];
        }
    }return 0;

}

void boucleCode() {
    for (int i=1 ; i<= 208; i++) {
        debutCode ();
        passageDonneesCode();
        supprimerJusquAHashtag ();
        supprimerEspaceAvantLettre();
        passageDonneesSongID (i);
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

     printf("Donnees : %s", donnees);
    
    printf("\n");
    printf("\n");
    printf("\n");
    printf("***************************\n");
    
    printf("%s\n",donnees);

    printf("\n");
    printf("\n");

    return 0;
    }

