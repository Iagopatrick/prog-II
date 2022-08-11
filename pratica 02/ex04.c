#include <stdio.h>

int main(){
    int  origem, mTransporte, cargaP, n = 0;
    float preco, Vseguro, Vtransporte, Vimposto, precoFinal, impostoFinal = 0.0, precoTotal = 0.0;

    do{
        printf("Digite o valor do produto ou digite um valor menor que 1 para finalizar o programa: \n");
        scanf("%f", &preco);
        if(preco > 0){
            do{
                if(n != 0){
                    printf("Digite valores validos!\n");
                }

                printf("Pais de origem:\n ");
                printf("1 - Estados Unidos\n ");
                printf("2 - Mexico\n ");
                printf("3 - Outros\n ");
                scanf("%d", &origem);
                n = 1;
            }while(origem < 1 || origem > 3);
            n = 0;
            do{
                if(n != 0){
                    printf("Digite valores validos!\n");
                }
                printf("Qual o meio de transporte?: \n");
                printf("1 - Terrestre\n ");
                printf("2 - Fluvial\n ");
                printf("3 - Aereo\n ");
                scanf("%d", &mTransporte);
                n = 1;
            }while(mTransporte < 1 || mTransporte > 3);
            n = 0;
            do{
                if(n != 0){
                    printf("Digite valores validos!\n");
                }
                printf("Carga perigosa?:\n ");
                printf("1 - Sim\n ");
                printf("2 - Nao\n ");
                scanf("%d", &cargaP);
                n = 1;
            }while(cargaP < 1 || cargaP > 2);
            

            
            // Valor do transporte:
            if(cargaP == 1){
                switch(origem){
                    case 1:
                        Vtransporte = 50;
                        break;
                    case 2:
                        Vtransporte = 21;
                        break;
                    case 3:
                        Vtransporte = 24;
                        break;
                    
                }
            }
            else{
                switch(origem){
                    case 1:
                        Vtransporte = 12;
                        break;
                    case 2:
                        Vtransporte = 21;
                        break;
                    case 3:
                        Vtransporte = 60;
                        break;
                }

            }


            // Valor Seguro
            if(origem == 2 || mTransporte == 3){
                Vseguro = preco/2.0;
            }
            else{
                Vseguro = 0.0;
            }

            // Valor Imposto
            if(preco <= 100){
                Vimposto = preco * 0.05;
            }
            else{
                Vimposto = preco * 0.10;
            }

            precoFinal = Vimposto + Vseguro + Vtransporte + preco;
            impostoFinal += Vimposto;
            precoTotal += precoFinal;
        }
        


        printf("Valor imposto: RS %.2f\n", Vimposto);
        printf("Valor transporte: RS %.2f\n", Vtransporte);
        printf("Valor seguro: RS %.2f\n", Vseguro);
        printf("Preco final: RS %.2f \n", precoFinal);
        printf("Total dos impostos: RS %.2f\n", impostoFinal);
        printf("Preco total dos produtos colocados: RS %.2f\n", precoTotal);

    }while(preco >= 1);






    return 0;
}