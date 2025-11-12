#include <stdio.h>

int main() {
    int n = 5;  // Hauteur de la pyramide
    int i, j;

    printf("=== Generation d'une pyramide de nombres (hauteur = %d) ===\n\n", n);

    // Boucle pour chaque niveau de la pyramide
    for (i = 1; i <= n; i++) {
        // Boucle pour afficher les espaces avant les nombres
        for (j = i; j < n; j++) {
            printf(" ");
        }

        // Boucle pour afficher les nombres croissants (de 1 à i)
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Boucle pour afficher les nombres décroissants (de i-1 à 1)
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Passage à la ligne suivante
        printf("\n");
    }

    printf("\n=== Generation de la pyramide terminee ===\n");
    return 0;
}

