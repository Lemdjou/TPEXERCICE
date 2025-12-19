#include <stdio.h>
#include <string.h>

int main() {
    char chaine1[100], chaine2[100];
    
    printf("=== Tri Alphabetique de Deux Chaines ===\n\n");
    
    // Lecture des deux chaînes
    printf("Entrez la premiere chaine : ");
    scanf("%s", chaine1);
    
    printf("Entrez la deuxieme chaine : ");
    scanf("%s", chaine2);
    
    printf("\nResultat (ordre alphabetique) :\n");
    
    // Utilisation de strcmp pour comparer
    // strcmp retourne :
    //   - une valeur négative si chaine1 < chaine2
    //   - 0 si chaine1 == chaine2
    //   - une valeur positive si chaine1 > chaine2
    
    if (strcmp(chaine1, chaine2) < 0) {
        // chaine1 vient avant chaine2
        printf("%s\n", chaine1);
        printf("%s\n", chaine2);
    } else if (strcmp(chaine1, chaine2) > 0) {
        // chaine2 vient avant chaine1
        printf("%s\n", chaine2);
        printf("%s\n", chaine1);
    } else {
        // Les deux chaînes sont identiques
        printf("%s\n", chaine1);
        printf("%s (identique)\n", chaine2);
    }
    
    return 0;
}