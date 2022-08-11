/***************************************************************
Trabalho Computacional – Programação II – 2022/1 – Ciência/Engenharia da Computação
Grupo:  Mateus Malta Loss e Iago Patrick de Melo Gripp Vilas Boas 
***************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    FILE *arq1, *change_arq;
    char auxiliar, nome_arq[20], new_arq[20] = " ";
    int retorno, i;

    printf("Escreva o nome do arquivo com o .txt: \n");
    // Recebe o nome do arquivo, deve estar com .txt
    scanf("%s", &nome_arq);

    arq1 = fopen(nome_arq, "r");
    confere(arq1);
    
    i = 0;
    do{
        // Pego cada caracter do nome do arquivo e coloco no novo nome, sem o .txt
        new_arq[i] = nome_arq[i];
        i++;
    }while(nome_arq[i] != '.');

    //concatena _versao2.txt no arquivo
    strcat(new_arq, "_versao2.txt");
    // abertura do novo arquivo
    change_arq = fopen(new_arq, "w");
    confere(change_arq);

    
    while(auxiliar != EOF){
        // Aqui será pego o caractere, com o auxiliar, dentro do arquivo e mudara para um espaço vazio, caso seja um ponto de texto
        auxiliar = fgetc(arq1);
        if(auxiliar != EOF){
            if(auxiliar == '?'||auxiliar == '!' ||auxiliar == '.'||auxiliar == ';'||auxiliar == ','||auxiliar == ':'||auxiliar == '('||auxiliar == ')'||auxiliar == '-'){
                auxiliar = ' ';
            }
            fputc(auxiliar, change_arq);
        }
    }
   


    retorno = fclose(arq1);
    confereclose(retorno);

    retorno = fclose(change_arq);
    confereclose(retorno);
    


    return 0;
}