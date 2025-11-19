#include <stdio.h>

int main() {
    char ch1[100] = "Hello";
    char ch2[100] = " World!";
    char copie[100];
    char concat[200];

    int i = 0;
    
    /* ----------------------- */
    /* 1. Calcul longueur ch1  */
    /* ----------------------- */
    int longueur = 0;
    while (ch1[longueur] != '\0') {
        longueur++;
    }

    printf("Longueur de \"%s\" = %d\n", ch1, longueur);

    /* ------------------------------- */
    /* 2. Copier ch1 dans copie[]      */
    /* ------------------------------- */
    i = 0;
    while (ch1[i] != '\0') {
        copie[i] = ch1[i];
        i++;
    }
    copie[i] = '\0';   // fin de chaîne obligatoire !

    printf("Copie de ch1 : \"%s\"\n", copie);

    /* ------------------------------- */
    /* 3. Concaténer ch1 et ch2        */
    /* ------------------------------- */
    i = 0;

    // Copie de ch1 dans concat
    while (ch1[i] != '\0') {
        concat[i] = ch1[i];
        i++;
    }

    // Ajout de ch2 à la suite
    int j = 0;
    while (ch2[j] != '\0') {
        concat[i] = ch2[j];
        i++;
        j++;
    }

    concat[i] = '\0';

    printf("Concaténation : \"%s\"\n", concat);

    return 0;
}
