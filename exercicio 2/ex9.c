#include <stdio.h>

int main(){
    int idade;
    do{
        printf("Digite a sua idade");
        scanf("%d", idade);
    }while(idade < 0);
    if(idade <= 18 ){
        printf("Menor de idade");

    }
    else if(idade<= 64){
        printf("Maior de idade");

    }

    else{
        printf("Idosa");
    }



    return 0;
}