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
        printf("Erro ao fechar o arquivo");
        system("pause");
        exit(1);
    }
}

int main(){
    FILE *arq;
    char nome_arquivo[20];
    printf("Escreva o nome do arquivo com o .txt");
    scanf("%s", &nome_arquivo);
    arq = fopen(nome_arquivo, "r");
    confereabertura(arq);
    
    int id, jd, aux, maior, retorno;
    char letra;
    //A primeira coluna representa o número (1 a 26) relativa a letra no vetor alfabeto. A segunda coluna representa a frequência com que cada letra aparece.
    int contador[26][2] = {{0, 0}, {1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0}, {6, 0}, {7, 0}, {8, 0}, {9, 0}, {10, 0}, {11, 0}, {12, 0}, {13, 0}, {14, 0}, {15, 0}, {16, 0}, {17, 0}, {18, 0}, {19, 0}, {20, 0}, {21, 0}, {22, 0}, {23, 0}, {24, 0}, {25, 0}};
    char alfabetom[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char alfabetoM[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    
    //Percorreremos todo o arquivo de texto determinando a quantidade de cada uma das letras.
    while(!feof(arq)){
        letra = fgetc(arq);
        for(id = 0; id < 26; id++){
            if(letra == alfabetom[id] || letra == alfabetoM[id]){
                contador[id][1] += 1;
            }
        }
        
    }
    fclose(arq);

    //Organiza a matriz de forma decrescente a frequencia com que cade letra aparece.
    maior = contador[0][1];
    for(id = 1; id < 26; id++){
        for(jd = 0; jd < id; jd++){
            if(contador[id][1] > contador[jd][1]){
                aux = contador[id][1];
                contador[id][1] = contador[jd][1];
                contador[jd][1] = aux;
                aux = contador[id][0];
                contador[id][0] = contador[jd][0];
                contador[jd][0] = aux;
            }
        }
    }

    //Exibe na tela o ranking da frequencia das letras.
    for(id = 0; id < 26; id++){
        if(contador[id][1] > 0){
            printf("a letra %c apareceu %d vezes\n", alfabetom[contador[id][0]], contador[id][1]);
        }
    }

    retorno = fclose(arq);
    conferefechamento(retorno);
    return 0;
}