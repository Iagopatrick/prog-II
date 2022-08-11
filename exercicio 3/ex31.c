#include <stdio.h>

int main(){
    int x, a = 0;
    do{
        printf("Digite um numero qualquer: \n");
        scanf("%d", &x);
        switch(x){
            case 0 ... 25:
                printf("O numero esta no intervalo [0, 25]\n");
                a += 1;
                break;
            case 26 ... 50:
                printf("O numero esta no intervalo [26, 50]\n");
                a += 1;
                break;
            case 51 ... 75:
                printf("O numero esta no intervalo [51, 75]\n");
                a += 1;
                break;
            case 76 ... 100:
                printf("O numero esta no intervalo [76, 100]\n");
                a += 1;
                break;
        }


    }while(x >= 0 && x <= 100);

    printf("%d numero(s) no intervalo [0, 100]", a);




    return 0;
}