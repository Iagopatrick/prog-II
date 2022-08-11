#include <stdio.h>
#include <math.h>

int main(){
    int i, numero, num, soma = 1, contador, perfeito = 0, x = 1;
    do{
        numero = pow(2,x);
        for(i = 2; i <= numero; i*=2){
            
            soma += i ;   
        }
        if((soma % 2 != 0 && soma % 5 != 0 && soma % 3 != 0 && soma % 11 != 0 && soma % 7 != 0 && soma % 13 != 0 && soma % 19 != 0 && soma % 23 != 0 && soma % 29 != 0) || soma == 3 || soma == 7){
            contador = soma * numero;
            perfeito += 1;
            printf("%d e perfeito \t", contador);
        }
        
        x += 1;
        i = 2;
        soma = 1;
    


    }while(perfeito != 5);


    return 0;
}