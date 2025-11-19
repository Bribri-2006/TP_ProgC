#include <stdio.h>

int main() {
    int d = 0x10001000; // Exemple : vous pouvez changer cette valeur

    // Positions des bits (en partant de 0 pour le bit de droite)
    int bit4_pos  = 31 - 3;   // 4ème bit de gauche → bit 28
    int bit20_pos = 31 - 19;  // 20ème bit de gauche → bit 12

    // Extraction des bits
    int bit4  = (d >> bit4_pos) & 1;
    int bit20 = (d >> bit20_pos) & 1;

    // Vérification : les deux doivent être à 1
    int resultat = (bit4 == 1 && bit20 == 1) ? 1 : 0;

    // Affichage
    printf("%d\n", resultat);

    return 0;
}
