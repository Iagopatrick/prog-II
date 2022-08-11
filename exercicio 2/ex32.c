#include <stdio.h>
#include <math.h>

int main(){
    int num, manp1, manp2, conta1, conta2;
    do{
        printf("Digite um numero de 4 digitos, que nao seja negativo: \n");
        scanf("%d", &num);
    }while(num < 1000 || num > 9999);
    manp1 = num / 100;
    manp2 = num - (manp1 * 100);    
    conta1 = manp1 + manp2;
    conta2 = pow(conta1, 2);

    if(conta2 == num){
        printf("Possui a caracteristica!");
    }
    else{
        printf("Nao possui tal caracteristica!");
    }



    return 0;
}
