#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2, partieReelle, partieImaginaire;
    
    printf("=== Resolution d'equation du second degre ===\n");
    printf("Forme : ax^2 + bx + c = 0\n\n");
    
    // Lecture des coefficients
    printf("Entrez le coefficient a : ");
    scanf("%f", &a);
    
    printf("Entrez le coefficient b : ");
    scanf("%f", &b);
    
    printf("Entrez le coefficient c : ");
    scanf("%f", &c);
    
    // Vérification si a = 0
    if (a == 0) {
        printf("\nErreur : 'a' ne peut pas etre nul.\n");
        printf("Ce n'est pas une equation du second degre.\n");
        
        if (b != 0) {
            printf("Equation du premier degre : %.2fx + %.2f = 0\n", b, c);
            printf("Solution : x = %.2f\n", -c/b);
        } else if (c == 0) {
            printf("Equation toujours vraie (0 = 0)\n");
        } else {
            printf("Equation impossible (%.2f = 0)\n", c);
        }
        return 0;
    }
    
    printf("\nEquation : %.2fx^2 + %.2fx + %.2f = 0\n", a, b, c);
    
    // Calcul du discriminant (delta = b² - 4ac)
    delta = b * b - 4 * a * c;
    
    printf("Discriminant (delta) = %.2f\n\n", delta);
    
    // Analyse des solutions selon le discriminant
    if (delta > 0) {
        // Deux solutions réelles distinctes
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        
        printf("Delta > 0 : Deux solutions reelles distinctes\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
        
    } else if (delta == 0) {
        // Une solution réelle double
        x1 = -b / (2 * a);
        
        printf("Delta = 0 : Une solution reelle double\n");
        printf("x = %.2f\n", x1);
        
    } else {
        // Deux solutions complexes conjuguées
        partieReelle = -b / (2 * a);
        partieImaginaire = sqrt(-delta) / (2 * a);
        
        printf("Delta < 0 : Deux solutions complexes conjuguees\n");
        printf("x1 = %.2f + %.2fi\n", partieReelle, partieImaginaire);
        printf("x2 = %.2f - %.2fi\n", partieReelle, partieImaginaire);
    }
    
    return 0;
}
