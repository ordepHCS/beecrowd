#include <stdio.h>

int main() {
    int a, b, c, d;
    int produto;
    scanf("%d %d %d %d", &a,&b,&c,&d);

    produto = (a * b - c * d);

    printf("DIFERENCA = %d\n", produto);
    
    return 0;
}