#include <stdio.h>

int main(){
    float notas;
    do{
        printf("Digite a media da sua nota: \n");
        scanf("%f", &notas);
    }while(notas < 0);

    if(notas <= 4.9){
        printf("D");
    }
    else if(notas <= 6.9){
        printf("C");
    }
    else if(notas <= 8.9){
        printf("B");
    }
    else if(notas <= 10){
        printf("A");
    }
    



    return 0;
}