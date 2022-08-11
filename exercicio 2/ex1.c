#include <stdio.h>

int main(){
    float x;
    printf("Digite um numero\n");
    scanf("%f", &x);

    if(x > 80.0){
        printf("O numero %f e maior que 80", x);
    }
    else if(x < 25){
        printf("O numero %f e menor que 25", x);
    }
    else{
        printf("O numero %f e igual a 40", x);
    }



    return 0;
}