#include <stdio.h>

int main() {
    int nombre, i, estPremier;
    
    printf("=== Verification de Nombre Premier ===\n\n");
    
    // Lecture du nombre
    printf("Entrez un entier positif : ");
    scanf("%d", &nombre);
    
    // Vérification si le nombre est positif
    if (nombre <= 0) {
        printf("\nErreur : Le nombre doit etre positif.\n");
        return 0;
    }
    
    // Cas particuliers
    if (nombre == 1) {
        printf("\n%d n'est pas un nombre premier.\n", nombre);
        printf("(Par definition, 1 n'est pas considere comme premier)\n");
        return 0;
    }
    
    if (nombre == 2) {
        printf("\n%d est un nombre premier.\n", nombre);
        printf("(2 est le seul nombre premier pair)\n");
        return 0;
    }
    
    // Initialisation
    estPremier = 1; // On suppose que le nombre est premier
    
    // Vérification de la divisibilité
    // On teste tous les diviseurs de 2 jusqu'à nombre/2
    for (i = 2; i <= nombre / 2; i++) {
        if (nombre % i == 0) {
            // Si nombre est divisible par i, il n'est pas premier
            estPremier = 0;
            printf("\n%d n'est pas un nombre premier.\n", nombre);
            printf("%d est divisible par %d (%d x %d = %d)\n", 
                   nombre, i, i, nombre/i, nombre);
            break;
        }
    }
    
    // Si aucun diviseur n'a été trouvé
    if (estPremier) {
        printf("\n%d est un nombre premier.\n", nombre);
        printf("%d n'est divisible que par 1 et par lui-meme.\n", nombre);
    }
    
    return 0;
}
