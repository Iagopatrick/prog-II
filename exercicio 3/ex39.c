#include <stdio.h>
#include <string.h>


int main(){
    int imaior = 0, idade, contaM = 0, x = 0;
    char sexo[2], corO[10], corC[10];
    

    


   do{
        printf("Digite a idade do membro %d: \t", x + 1);
        scanf("%d", &idade);

        if(idade >= 0){

            printf("digite o sexo do membro %d: \t", x + 1);
            scanf("%s", sexo);
            getchar();

            printf("digite a cor dos olhos do membro %d: \t", x + 1);
            scanf("%s", corO);
            getchar();

            printf("digite a cor do cabelo do membro %d: \t", x + 1);
            scanf("%s", corC);
            getchar();

            



            if(idade > imaior){
                imaior = idade;
                
            }
            
            
            if(idade <= 35 && idade >= 18 && (sexo[0] == 'f' || sexo[0] == 'F') && corO[0] == 'v' && corC[0] == 'l' ){
                contaM += 1;
            }

            x += 1;
        }

    }while(idade >= 0);

    printf("O maior idade e %d\n", imaior);
    
    printf("Quantidade de mulheres e: %d\n", contaM);

    return 0;
}