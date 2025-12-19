#include <stdio.h>

int main() {
    int nombreMagique = 42;  // Le nombre secret à deviner
    int nombreSaisi;
    int tentatives = 0;
    
    printf("=== Jeu du Nombre Magique ===\n");
    printf("Devinez le nombre magique entre 1 et 100\n\n");
    
    do {
        printf("Entrez un nombre : ");
        scanf("%d", &nombreSaisi);
        tentatives++;
        
        if (nombreSaisi < nombreMagique) {
            printf("C'est plus petit ! Essayez encore.\n\n");
        } else if (nombreSaisi > nombreMagique) {
            printf("C'est plus grand ! Essayez encore.\n\n");
        } else {
            printf("\nFélicitations ! Vous avez trouvé le nombre magique %d\n", nombreMagique);
            printf("Nombre de tentatives : %d\n", tentatives);
        }
        
    } while (nombreSaisi != nombreMagique);
    
    return 0;
}