#include <stdio.h>

int main(){
    float peso, gRelativa;
    int op;

    printf("Digite seu peso: \n");
    scanf("%f", peso);

    printf("Digite sua opcao:\n ");
    printf("1 - Mercurio\n");
    printf("2 - Venus\n");
    printf("3 - Marte\n");
    printf("4 - Jupiter\n");
    printf("5 - Saturno\n");
    printf("6 - Urano\n");
    scanf("%d", op);

    switch(op){
            case 1:
                printf("Planeta escolhido : Mercurio, Gravidade relativa: 0.37");
                gRelativa = 0.37;   
               
            break;
            case 2:
                printf("Planeta escolhido : Venus, Gravidade relativa: 0.88");
                gRelativa = 0.88;   
            break;
            case 3:
                printf("Planeta escolhido : Marte, Gravidade relativa: 0.38");
                gRelativa = 0.38;   
            break;
            case 4:
                printf("Planeta escolhido : Jupiter, Gravidade relativa: 2.64");
                gRelativa = 2.64;   
            break;
            case 5:
                printf("Planeta escolhido : Saturno, Gravidade relativa: 1.15");
                gRelativa = 1.15;   
            break;
            case 6:
                printf("Planeta escolhido : Urano, Gravidade relativa: 1.17");
                gRelativa = 1.17;   
            break;
        }
        printf("\nSeu novo peso seria: %.2f", peso * gRelativa);


    return 0;
}




