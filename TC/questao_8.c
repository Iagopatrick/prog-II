/***************************************************************
Trabalho Computacional – Programação II – 2022/1 – Ciência/Engenharia da Computação
Grupo: Iago Patrick de Melo Gripp Vilas Boas  e Mateus Malta Loss
***************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Verificamos se a abertura do arquivo ocorreu normalmente.
void confereabertura(FILE *arq){
    if(arq == NULL){
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);
    }
}

//Conferimos se o arquivo foi fechado corretamente.
void conferefechamento(int retorno){
    if(retorno != 0){
        printf("Erro ao fechar o arquivo\n");
        system("pause");
        exit(1);
    }
}

int main(){
    int opcao, retorno, flag;
    FILE *arq;
    char str[100], nome_arq[20];
    
    do{
        flag = 0;
        //Exibe as 3 opções até que seja digitado 3. Caso a opção 3 seja digitada o programa finaliza.
        printf("Digite a opcao que deseja:\n");
        printf("1. Criar arquivo.\n");
        printf("2. Escrever frase no arquivo.\n");
        printf("3. Sair do programa\n");
        scanf("%d", &opcao);

        //Caso seja selecionado a opção 1, o usuario digitara o nome do arquivo que deseja criar
        if(opcao == 1){
            //Quando a opção 1 é selecionada a variavel flag fica igua a 1.
            flag = 1;
            printf("Digite o nome do arquivo que deseja criar .txt:  ");
            getchar();
            scanf("%s", &nome_arq);
            arq = fopen(nome_arq, "w");
            confereabertura(arq);
        }

        //Caso seja selecionado a opção 2, o usuario digitara o arquvio que deseja abrir para digitar.
        if(opcao == 2){
            printf("Digite o nome do arquivo .txt que deseja abrir:  ");
            getchar();
            scanf("%s", &nome_arq);
            arq = fopen(nome_arq, "a");
            confereabertura(arq); 
            printf("Frase que deseja digitar:\n");
            getchar();
            fgets(str, 100, stdin);
            fprintf(arq,"%s", str);
            retorno = fclose(arq);
            conferefechamento(retorno);

            //Verifica o valor da variavel flag. Se for flag for igual a 1, o programa fechara o arquivo criado e ira conferir se foi fechado corretamente.
            if(flag == 1){
                retorno = fclose(arq);
                conferefechamento(retorno);
            }
        
        }
    }while(opcao != 3);
    
    return 0;
}