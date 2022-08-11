#include <stdio.h>
#include <string.h>


int main(){
    int imaior = 0, imenor = 800000, idade[200], contad = 0, contaM = 0, x;
    char sexo[2];
    

    float salario, Tsala = 0;

    printf("Digite quantos fazem parte do grupo: \t");
    scanf("%d", &x);

    for(int i = 0; i < x; i++){
        
        printf("digite o salario do membro %d: \t", i + 1);
        scanf("%f", &salario);

        printf("digite o sexo do membro %d: \t", i + 1);
        scanf("%s", sexo);
        getchar();

        printf("Digite a idade do membro %d: \t", i + 1);
        scanf("%d", &idade[i]);

        if(idade[i] > imaior){
            imaior = idade[i];
            
        }
        if(idade[i] < imenor){
            imenor = idade[i];
            
        }
        Tsala += salario;
        contad += 1;
        if(salario <= 1000){
        switch(sexo[0]){
            case 'f':
                contaM += 1;
                break;
            case 'F':
                contaM += 1;
                break;
        }

        }

        

    }

    printf("O maior idade e %d\n", imaior);
    printf("O menor idade e %d\n", imenor);
    printf("A media de salarios do grupo e: %.2f\n", (Tsala/contad));
    printf("Quantidade de mulheres com salario ate 1000,00: %d\n", contaM);

    return 0;
}