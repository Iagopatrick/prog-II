#include <stdio.h>

int somav(int v[], int x){
    int i, soma = 0;
    for(i = 0; i < x; i++){
        soma += v[i];
    }
    return soma;
}



int main(){
    int ve[5], i, resultado;

    printf("Digite o valores do vetor: \n");
    for(i = 0; i < 5; i++){
        scanf("%d", &ve[i]);
    }

    for(i = 0; i < 5; i++){
        printf("%d, ", ve[i]);
    }

    resultado = somav(ve, 5);
    printf("\nA soma e: %d", resultado);






    return 0;
}