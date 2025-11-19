#include <stdio.h>

int main() {
    int d = 0x10001000;  // Exemple : choisir ici la valeur à tester
    int resultat;

    // Indices des bits (en partant de la droite) correspondant
    // au 4e et au 20e bits de gauche dans un entier 32 bits
    int bit4gauche = 31 - 3;   // = 28
    int bit20gauche = 31 - 19; // = 12

    int bit4 = (d >> bit4gauche) & 1;
    int bit20 = (d >> bit20gauche) & 1;

    if (bit4 == 1 && bit20 == 1)
        resultat = 1;
    else
        resultat = 0;

    printf("%d\n", resultat);

    return 0;
}
