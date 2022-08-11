#include <stdio.h>
#include <math.h>


int main(){
    float a,b,c, raiz1, raiz2, delta; 
    
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    delta = (pow(b,2))- (4*a*c); 
    if(delta < 0){
        printf("Delta e negativo, logo nao possui raizes");
        return 0;
    }
    raiz1 = (-b+sqrt(delta))/(2*a); 
    raiz2 = (-b-sqrt(delta))/(2*a);

    printf("\nraiz 1 = %.2f",raiz1); 
    printf("\nraiz 2 = %.2f", raiz2); 
    printf("\nValor do delta = %.2f", delta);
    return 0;
}