#include <stdio.h>

int main() {
    double notaA, notaB, notaC;
    double pesoA = 2.0, pesoB = 3.0, pesoC = 5.0;
    double media;

    scanf("%lf %lf %lf", &notaA, &notaB, &notaC);

    media = (notaA * pesoA + notaB * pesoB + notaC * pesoC) / (pesoA + pesoB + pesoC);

    printf("MEDIA = %.1lf\n", media);

    return 0;
}