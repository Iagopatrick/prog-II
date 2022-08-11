#include <stdio.h>

int main(){
    int num, maior = 0, menor = 0;
    float h, hmaior = 0, hmenor = 900000;
    for(int i = 0; i < 5; i++){
        printf("digite o numero do aluno %d: \t", i + 1);
        scanf("%d", &num);

        printf("Digite a altura do aluno %d: \t", i + 1);
        scanf("%f", &h);
        if(h > hmaior){
            hmaior = h;
            maior = num;
        }
        if(h < hmenor){
            hmenor = h;
            menor = num;
        }

    }

    printf("O maior aluno e %d, com %.2f de altura!\n", maior, hmaior);
    printf("O menor aluno e %d, com %.2f de altura!\n", menor, hmenor);

    return 0;
}