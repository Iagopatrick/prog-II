#include <stdio.h>

int main(){
    float a1,a2,a3, somaAmigos, valorLoteria;
    do
    {
        printf("Coloque quanto o primeiro amigo colocou: \n");
        scanf("%f", &a1);
    } while (a1 <= 0);
    
    do
    {
        printf("\nColoque quanto o segundo amigo colocou: \n");
        scanf("%f", &a2);  
    } while (a2 <= 0);

    do
    {
        printf("\nColoque quanto o terceiro amigo colocou: \n");
        scanf("%f", &a3);
    } while (a3 <= 0);
    
    somaAmigos = a1 + a2 + a3;

    printf("\nColoque o valor da loteria:\n");
    scanf("%f", &valorLoteria);

    printf("O primeiro amigo ganhou: %.2f", (a1/somaAmigos)*valorLoteria);
    printf("\nO segundo amigo ganhou: %.2f", (a2/somaAmigos)*valorLoteria);
    printf("\nO terceiro amigo ganhou: %.2f", (a3/somaAmigos)*valorLoteria);
    
      

    

    return 0;
}