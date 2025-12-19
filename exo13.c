#include <stdio.h>
#include <math.h>

// Définition de la structure Point
struct Point {
    float x;  // Coordonnée x
    float y;  // Coordonnée y
};

// Fonction pour calculer la distance entre deux points
float calculerDistance(struct Point p1, struct Point p2) {
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    
    // Formule : distance = sqrt((x2-x1)² + (y2-y1)²)
    return sqrt(dx * dx + dy * dy);
}

int main() {
    struct Point point1, point2;
    float distance;
    
    printf("=== Calcul de Distance Entre Deux Points ===\n\n");
    
    // Lecture du premier point
    printf("Entrez les coordonnées du premier point (x y) : ");
    scanf("%f %f", &point1.x, &point1.y);
    
    // Lecture du deuxième point
    printf("Entrez les coordonnées du deuxième point (x y) : ");
    scanf("%f %f", &point2.x, &point2.y);
    
    // Calcul de la distance
    distance = calculerDistance(point1, point2);
    
    // Affichage des résultats
    printf("\n--- Résultats ---\n");
    printf("Point 1 : (%.2f, %.2f)\n", point1.x, point1.y);
    printf("Point 2 : (%.2f, %.2f)\n", point2.x, point2.y);
    printf("Distance entre les deux points : %.2f\n", distance);
    
    return 0;
}