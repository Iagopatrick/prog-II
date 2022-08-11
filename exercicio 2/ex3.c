#include <stdio.h>

int main(){
    float x;
    printf("Digite um valor qualquer: ");
    scanf("%f", &x);

    if(x >= -10 && x < 30){
        printf("\nO numero %f esta entre o intervalo ]-10, 30]");

    }
    else{
       printf("\nO numero %f nao esta entre o intervalo ]-10, 30]"); 
    }


    return 0;
}