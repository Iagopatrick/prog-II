#include <stdio.h>

int main(){
    int x;
    do{
        printf("Digite um numero correspondete a algum mes: ");
        scanf("%d", &x);
    }while(x < 0);

    switch(x){
        case 1:{
            printf("O mes correspondente ao %d e Janeiro", x);
            break;
        }
        case 2:{
            printf("O mes correspondente ao %d e Fevereiro", x);
            break;
        }
        case 3:{
            printf("O mes correspondente ao %d e Março", x);
            break;
        }
        case 4:{
            printf("O mes correspondente ao %d e Abril", x);
            break;
        }
        case 5:{
            printf("O mes correspondente ao %d e Maio", x);
            break;
        }
        case 6:{
            printf("O mes correspondente ao %d e Junho", x);
            break;
        }
        case 7:{
            printf("O mes correspondente ao %d e Julho", x);
            break;
        }
        case 8:{
            printf("O mes correspondente ao %d e Agosto", x);
            break;
        }
        case 9:{
            printf("O mes correspondente ao %d e Setembro", x);
            break;
        }
        case 10:{
            printf("O mes correspondente ao %d e Outubro", x);
            break;
        }
        case 11:{
            printf("O mes correspondente ao %d e Novembro", x);
            break;
        }
        case 12:{
            printf("O mes correspondente ao %d e Dezembro", x);
            break;
        }
    
        default:{
            printf("O numero %d nao corresponde a nenhum mes.", x);
            break;
        }
    }
        



    return 0;
}