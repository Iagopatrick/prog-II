#include <stdio.h>

float maior(float v[], int x){
    float maior;
    int i;
    maior = v[0];
    for(i = 0; i < x; i++){
        if(v[i] > maior){
            maior = v[i];
        }
    }
    return maior;
}



int main(){
    float ve[10], resultado;
    int i;

    printf("Digite o valores do vetor: \n");
    for(i = 0; i < 10; i++){
        scanf("%f", &ve[i]);
    }

    for(i = 0; i < 10; i++){
        printf("%.2f, ", ve[i]);
    }

    resultado = maior(ve, 10);
    printf("\nO maior e: %.2f", resultado);






    return 0;
}