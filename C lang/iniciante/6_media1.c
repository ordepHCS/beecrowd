#include <stdio.h>

int main() {
    double notaA, notaB;
    double pesoA = 3.5, pesoB = 7.5; 
    double media;

    scanf("%lf %lf", &notaA, &notaB);

    media = (notaA * pesoA + notaB * pesoB) / (pesoA + pesoB);

    printf("MEDIA = %.5lf\n", media);
    
    return 0;
}