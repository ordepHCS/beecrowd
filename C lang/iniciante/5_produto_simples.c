#include <stdio.h>
 
int main() {
    int prod1, prod2;
    
    scanf("%d %d",&prod1,&prod2);
    
    int calcul = prod1 * prod2;
    int prod = calcul;
    
    printf("PROD = %d\n", prod);
    return 0;
}