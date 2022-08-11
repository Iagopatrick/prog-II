#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// ex 1:
struct atleta{
    char nome[20];
    char esporte[20];
    int idade;
    float altura;
};


void ex1(){
    int i;
    FILE *arq1;
    struct atleta all[5];
    arq1 = fopen("text.txt","wb");
    if(arq1 == NULL){
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);
    }
    for(i = 0; i < 5; i++){
        getchar();
        fgets(all[i].nome, 20, stdin);
        getchar();
        fgets(all[i].esporte, 20, stdin);
        scanf("%d", &all[i].idade);
        scanf("%f", &all[i].altura);
    }
    fwrite(&all, sizeof(struct atleta), 5, arq1);
}

// Ex 2

void ex2(){
    FILE *arq2;
    struct atleta all2[5];
    int i, velho, i_velho, i_alto;
    float alto;

    arq2 = fopen("text.txt", "rb");

    if(arq2 == NULL){
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);
    }
    fread(&all2, sizeof(struct atleta), 5, arq2);
    alto = all2[0].altura;
    i_alto = 0;
    velho = all2[0].idade;
    i_velho = 0;
    for(i = 0; i < 5; i++){
        if(alto < all2[i].altura){
            i_alto = i;
            alto = all2[i].altura;
        }
        if(velho < all2[i].idade){
            i_velho = i;
            velho = all2[i].idade;
        }
    }
    printf("O mais alto e mais velho sao, respectivamente: %s, %s \n", all2[i_alto].nome, all2[i_velho].nome);
    
}

// ex 3
struct end {
    char nome[20];
    char pais[15];
    char estado[15];
    char cidade[15];
    char bairro[15];
    char rua[20];
    int num;
    int apto;
};


void ex03(){

    FILE *arq3;
    struct end pessoa;
    arq3 = fopen("text2.txt", "wb");

    if(arq3 == NULL){
        printf("Erro na arbetura do arquivo");
        system("pause");
        exit(1);
    }

    getchar();
    fgets(pessoa.nome, 20, stdin);
    getchar();
    fgets(pessoa.pais, 15, stdin);
    getchar();
    fgets(pessoa.estado, 15, stdin);
    getchar();
    fgets(pessoa.cidade, 15, stdin);
    getchar();
    fgets(pessoa.bairro, 15, stdin);
    getchar();
    fgets(pessoa.rua, 20, stdin);

    scanf("%d", &pessoa.num);
    scanf("%d", &pessoa.apto);

    fwrite(&pessoa, sizeof(struct atleta), 1, arq3);
}

// Ex 04
void ex04(){
    FILE *arq4;
    struct end pessoa;
    arq4 = fopen("text2.txt", "rb");
    if(arq4 == NULL){
        printf("Erro na arbetura do arquivo");
        system("pause");
        exit(1);
    }
    fread(&pessoa, sizeof(struct atleta), 5, arq4);
    printf("Nome:%s\n Pais: %s Estado: %s Cidade: %s  \n Bairro: %s Rua: %s num: %d apto: %d", pessoa.nome, pessoa.pais, pessoa.estado, pessoa.cidade, pessoa.bairro, pessoa.rua, pessoa.num, pessoa.apto);
}

int main(){
    ex1();
    ex2();
    ex3();
    ex4();
    return 0;
}