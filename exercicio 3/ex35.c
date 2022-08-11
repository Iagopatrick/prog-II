#include <stdio.h>

int main(){
    int x, i, menor, maior, media = 0;

    printf("Digite o 1 numero: \t");
    scanf("%d", &x);

    menor = x;
    maior = x;

    for(i = 2; i <= 500; i++){
        printf("Digite o %d numero:\t", i);
        scanf("%d", &x);
        media += x;
        
        if(x> maior){
            maior = x;
        }
        if(x < menor){
            menor = x;
        }
    }

    printf("Maior : %d\n", maior);
    printf("Menor : %d\n", menor);
    printf("Media : %d\n", media/500);

    return 0;
}