/***************************************************************
Trabalho Computacional – Programação II – 2022/1 – Ciência/Engenharia da Computação
Grupo:  Mateus Malta Loss e Iago Patrick de Melo Gripp Vilas Boas 
***************************************************************/
#include <stdio.h>
#include <stdlib.h>

void confere(FILE *arq){
    // Confere se o arquivo foi aberto corretamente
    if(arq == NULL){
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);
    }
}

void confereclose(int retorno){
    if(retorno != 0){
        // Confere se o arquivo foi fechado corretamente
        printf("Erro ao fechar o arquivo");
        system("pause");
        exit(1);
    }
}

int main(){
    int i, j, op, retorno;
    char linha[46];
    FILE *arq7;
    arq7 = fopen("questao_7.txt", "w");
    confere(arq7);
    // Todos os for's seráo para fazer o print de forma visualmente bonita no arquivo
    fprintf(arq7," ");//fazendo a formatação de espaço corretamente dentro do arquivo
    for(i = 1; i < 10; i++){
        fprintf(arq7, "   %2d", i);
    }
    fprintf(arq7, "\n");
    for(i = 1; i < 11; i++){
        fprintf(arq7, "%2dx ", i);
        for(j = 1; j < 10; j++){
            fprintf(arq7, "|%2d| ", i*j);
        }
        if(i < 10){
            fprintf(arq7, "\n");
        }

    }
    // Se retorno != 0, o arquivo nao foi fechado corretamente, o programa para
    retorno = fclose(arq7);
    confereclose(retorno);

    printf("Deseja visualizar o que foi escrito no arquivo?\n");
    do{
        // Opção de visualização com tratamento
        printf("1-Sim\n2-Nao\n");
        scanf("%d", &op);
    }while(op < 1 || op >2);
    if(op == 1){
        arq7 = fopen("ex07.txt", "r");
        confere(arq7);
        do{
            // Recebe cada linha e imprime ela
            fgets(linha, 46, arq7);
            printf("%s", linha);
        }while(!feof(arq7));
        retorno = fclose(arq7);
        confereclose(retorno);
    }

    return 0;
}