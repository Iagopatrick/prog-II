#include <stdio.h>

int main(){
    int x;
    do{
        printf("Digite um numero correspondete a algum mes: ");
        scanf("%d", &x);
    }while(x < 0);

    switch(x){
        case 1:{
            printf("Janeiro 31 dias", x);
            break;
        }
        case 2:{
            printf("Fevereiro 28 dias", x);
            break;
        }
        case 3:{
            printf("Março 31 dias", x);
            break;
        }
        case 4:{
            printf("Abril 30 dias", x);
            break;
        }
        case 5:{
            printf("Maio 31 dias", x);
            break;
        }
        case 6:{
            printf("Junho 30 dias", x);
            break;
        }
        case 7:{
            printf("Julho 31 dias", x);
            break;
        }
        case 8:{
            printf("Agosto 30 dias", x);
            break;
        }
        case 9:{
            printf("Setembro 31 dias", x);
            break;
        }
        case 10:{
            printf("Outubro 30 dias", x);
            break;
        }
        case 11:{
            printf("Novembro 31 dias", x);
            break;
        }
        case 12:{
            printf("Dezembro 30 dias", x);
            break;
        }
    
        default:{
            printf("Nenhum mes correspondente.", x);
            break;
        }
    }
        



    return 0;
}