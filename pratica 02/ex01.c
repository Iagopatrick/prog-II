#include <stdio.h>

int main(){
    float a, b, salvanum;
    int escolha, n = 1;
    do{
        do{
        if (n == 1){
            printf("Digite um valor\n");
            scanf("%f", &a);
        }
        else{
            printf("Valor atual: %.2f\n", a);
        }
        
        printf("| - - - - - - - - - - - - - - |\n");
        printf("| Escolha uma opcao de 1 a 5  |\n");
        printf("| - - - - - - - - - - - - - - |\n");
        printf("| 1 - Adicao (+)              |\n");
        printf("| 2 - Subtracao (-)           |\n");
        printf("| 3 - Multiplicacao (*)       |\n");
        printf("| 4 - Divisao (/)             |\n");
        printf("| 5 - Exibir resultado (=)    |\n");
        printf("| - - - - - - - - - - - - - - |\n");
        printf("\n");
        scanf("%d", &escolha);
        if(escolha >= 1  && escolha <= 4){
            printf("\n");
            printf("Digite o segundo valor\n");
            scanf("%f", &b);
        }
        else if(escolha != 5){
            printf("\n");
            printf("Digite uma opcao valida!\n");
        }




        }while(escolha < 1 || escolha > 5);




        n = 2;
        switch (escolha){
            
            case 1:
                a += b;
            break;
            case 2:
                a -= b;
            break;
            case 3:
                a *= b;
            break;
            case 4:
                if(b != 0){
                    a /= b;

                }
                else{
                    printf("\n");
                    printf("Impossivel, divisao por zero\n");
                }
            break;
            case 5:
                printf("\n");
                printf("\n%.2f", a);
            break;
            default:
            break;
        }




    }while(escolha != 5);
    







    return 0;
}