#include <stdio.h>




int main(){
    int numero, x, contador = 0;

    printf("Digite um valor: \t");
    scanf("%d", &numero);


    if(numero % 2 != 0 || numero % 5 != 0 || numero % 3 != 0 ||numero % 7 != 0 || numero % 11 != 0){
        printf("E primo!");

    }

    else{
        for(x = 1; x <= numero; x++){
            if(numero % x == 0){
                printf("%d\t", x);
                contador += 1;
            }
        }

    }


    return 0;
}