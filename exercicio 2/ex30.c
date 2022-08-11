#include <stdio.h>
#include <math.h>

int main(){
    float x, Fx;
    printf("Digite o valor de x: \n");
    scanf("%f", &x);

    if(x <= 1){
        x = 1;
    }
    else if(x <= 2){
        x = 2;
    }
    else if(x <= 3){
        
        x = pow(x,2);
    }
    else{
        x = pow(x, 3);
    }

    Fx = (5 * x + 3)/sqrt(pow(x,2) - 16);


    printf("\nResultado e: %.2f", Fx);


    return 0;
}