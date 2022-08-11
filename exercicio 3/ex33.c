#include <stdio.h>

int main(){
    int numero, conta = 0, x = 0, y = 0, z = 0, svalor;

    do{
        x = 0;
        y = 0;
        z = 0;
        conta = 0;
        printf("Digite um valor qualquer, positivo: \t");
        scanf("%d", &numero);
        
        if(numero % 2 == 0){
            svalor = numero;

            do{ //Fazendo o numero de divisores maximos
                if(svalor % 2 == 0){
                    x += 1;
                    svalor /= 2;
                }
            }while(svalor % 2 == 0);

            svalor = numero;

            do{
                if(svalor % 3 == 0){
                    y += 1;
                    svalor /= 3;
                }

            }while(svalor % 3 == 0);

            svalor = numero;

            do{
                if(svalor % 5 == 0){
                    z += 1;
                    svalor /= 5;
                }
            }while(svalor % 5 == 0);

            conta = (x+1)*(y+1)*(z+1);
            printf("Esse numero possui %d divisores. \n", conta);

        }
        else{
            if(numero >= 10){
                for(int i = 0; i < numero; i++){
                    conta += i;
                }
                printf("A soma do inteiros, de 0 ate %d, excluindo o %d, e: %d \n", numero, numero, conta);
            }
            else{
                conta = 1;
                for(int j = 1; j <= numero; j++){
                    conta = j * conta;
                }
                printf("O valor de %d! e: %d \n", numero, conta);
            }
        }





    }while(numero >= 0);



    return 0;
}