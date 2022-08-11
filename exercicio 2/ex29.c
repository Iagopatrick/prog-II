#include <stdio.h>
#include <math.h>

int main(){
    float x;
    printf("Digite o valor de x: \n");
    scanf("%f", &x);

    if(x <= 1){
        printf("1");
    }
    else if(x <= 2){
        printf("2");
    }
    else if(x <= 3){
        printf("%.2f", pow(x,2));
    }
    else{
        printf("%.2f", pow(x, 3));
    }



    return 0;
}