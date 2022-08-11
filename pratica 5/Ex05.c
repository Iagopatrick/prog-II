#include <stdio.h>

// a)
void maior(int v[10], int ref){
    int i, conta = 0;
    printf("\nNumeros maiores que %d, referencia: \n[", ref);
    for(i = 0; i < 10; i++){
        if(v[i] > ref){
            printf("%d, ", v[i]);
            conta += 1;
        }
    }
    if(conta == 0){
        printf("Nenhum]");
    }
    else{
        printf("]");
    }
}

// b)

void menor(int v[10], int ref){
    int i, conta = 0;
    printf("\nNumeros menores que %d, referencia: \n[", ref);
    for(i = 0; i < 10; i++){
        if(v[i] < ref){
            printf("%d, ", v[i]);
            conta += 1;
        }
    }
    if(conta == 0){
        printf("Nenhum]");
    }
    else{
        printf("]");
    }
}

// c)

int igual(int v[10], int ref){
    int i, conta = 0;

    for(i = 0; i < 10; i++){
        if(v[i] == ref){
            conta += 1;
        }
    }
    return conta;
}    


int main(){
    int v[10], ref, i, resultadoi;
    printf("Digite os valores do vetor: ");
    for(i = 0; i < 10; i++){
        scanf("%d", &v[i]);
    }

    printf("\nDigite o valor referencia para comparacao\t");
    scanf("%d", &ref);

    maior(v, ref);
    menor(v, ref);
    resultadoi = igual(v, ref);

    printf("\nNumero de vezes que %d aparece no vetor: %d", ref, resultadoi);


    return 0;
}