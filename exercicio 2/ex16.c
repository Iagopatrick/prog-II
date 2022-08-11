#include <stdio.h>

int main(){
    float venda, acrescimo, valorfinal;
    


    printf("Digite o valor da venda: \n");
    scanf("%f", &venda);
   
    if(venda >=1000 ){
        acrescimo = 800 +(0.09 * venda);
    }
    else{
        acrescimo = venda * 0.09;

    }
    
    valorfinal = 200 + acrescimo;

    printf("Salario total: %.2f\n", valorfinal);

    return 0;
}