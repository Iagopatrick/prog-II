#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void confereabertura(FILE *arq){
    // Confere se o arquivo foi aberto corretamente
    if(arq == NULL){
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);
    }
}

void conferefechamento(int retorno){
    if(retorno != 0){
        // Confere se o arquivo foi fechado corretamente
        printf("Erro ao fechar o arquivo");
        system("pause");
        exit(1);
    }
}


int main(){ 
    char palavra[20], inversa[20];
    int op, i, j = 0, retorno, contador = 0, valor;
    FILE *arq10;

    arq10 = fopen("questao_10.txt", "w");
    confereabertura(arq10);

    do{
        printf("Digite a palavra (Digite fim para terminar): \t");
        fgets(palavra, 20, stdin);
        
        if(strcmp(palavra, "fim\n") != 0){
            fputs(palavra, arq10);
            /* A variavel contador irá receber +1 sempre que for colocada uma palavra. Isso é necessário por conta do \n
            que é recebido pelo fgets */
            contador += 1;
           
        }
    }while(strcmp(palavra, "fim\n") != 0);
    retorno = fclose(arq10);
    conferefechamento(retorno);
    // Abre o arquivo após fechá-lo, para abri-lo como leitura
    arq10 = fopen("ex10.txt", "r");
    confereabertura(arq10);

    printf("Deseja ver as palavras digitadas?\n");
    do{
        // Recebe a opção, há tratamento
        printf("1 - Sim\n2 - Nao\n");
        scanf("%d", &op);
    }while(op < 1 || op > 2);
    
    if(op == 1){
        do{
            fgets(palavra, 20, arq10);
            for(i = 0; i < strlen(palavra) - 1; i++){
                // Faz todas as letras passarem a ser minúsculas
                palavra[i] = tolower(palavra[i]);
            }

            for(i = 0; i < strlen(palavra) - 1; i++){
                printf("%c", palavra[i]);
                // O valor recebe 1 caso não seja palindroma 
                if(palavra[i] != palavra[strlen(palavra) - 2 - i]){
                    valor = 1;
                }
                else{
                    valor = 0;
                }
            }

            if(valor == 0){
                printf(" e palindroma.\n");
            }
            else{
                printf(" nao e palindroma.\n");
            }
            j++;
        }while(j < contador);
    }
    retorno = fclose(arq10);
    conferefechamento(retorno);

    return 0;
}