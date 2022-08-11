/***************************************************************
Trabalho Computacional – Programação II – 2022/1 – Ciência/Engenharia da Computação
Grupo:  Mateus Malta Loss e Iago Patrick de Melo Gripp Vilas Boas 
***************************************************************/

#include <stdio.h>
#include <string.h>

struct livros{
    int cod;
    char autor[20];
    char livro[20];
    char editora[20];
    int codArea;
    int num;
};

int main(){
    struct livros livro[15];
    int i, codigo_acesso, temp, pag100 = 0;


    // a)
    for(i = 0; i < 15; i++){
        do{
            // Verifica se o codigo é válido, se não for, o programa continua pedindo codigo do livro.
            printf("Digite o codigo do livro: \t");
            scanf("%d", &livro[i].cod);
        }while(livro[i].cod <= 0);
        // O uso do getchar é necessário por ter sido solicitado um número antes de solicitar o char
        getchar();
        printf("Digite o nome do autor: \n");
        fgets(livro[i].autor, 20, stdin);
        
        printf("Digite o nome do livro: \n");
        fgets(livro[i].livro, 20, stdin);

        printf("Digite o nome da editora: \n");
        fgets(livro[i].editora, 20, stdin);

        do{
            // Verifica se o codigo da area é valido, deve ser de 1 a 3, qualquer coisa diferente disso é dado como invalido
            printf("Digite o codigo da area: \n");
            scanf("%d", &livro[i].codArea);
        }while(livro[i].codArea < 1 || livro[i].codArea > 3);

        do{
            // Verifica se o numero de páginas valido, deve ser > 0
            printf("Digite o numero de paginas: \n");
            scanf("%d", &livro[i].num);
        }while(livro[i].num <= 0);

    }

    //  b)

    do{
        printf("Digite o código do livro para consultá-lo: \n");
        scanf("%d", &codigo_acesso);
        // temp é minha variavel auxiliar, recebe o valor 15 por ser o valor de fora do vetor, que sera verificado logo após
        temp = 15; 
        for(i = 0; i < 15; i++){
            /* Aqui eu percorro todo o vetor, a procura do codigo do livro, caso seja válido, tenho uma variavel temporaria auxiliar
            que recebe o valor do indice no qual está o codigo e coloco na tela as informações nele contido.*/
            if(codigo_acesso == livro[i].cod){
                temp = i;
            }
        }
        switch(temp){
            // O switch padrozina os prints caso ele for válido, usando a variavel temporária
            case 15:
            if(codigo_acesso != -1){
                printf("Digite um codigo valido! \n");
            }
            break;
            case 0 ... 14:
            printf("Codigo escolhido: %d\n", livro[temp].cod);
            printf("Nome do livro: %s\n", livro[temp].livro);
            printf("Nome do autor: %s\n", livro[temp].autor);
            printf("Editora: %s \n", livro[temp].editora);
            printf("Numero de paginas: %d\n", livro[temp].num);
            printf("Area: \t");
            switch(livro[temp].codArea){
                case 1:
                printf("Ciências exatas");
                break;
                case 2:
                printf("Ciências humanas");
                break;
                case 3:
                printf("Ciências biomédicas");
                break;
            }
            printf("\n");
            break;
        }
    }while(codigo_acesso != -1);

    // For para contar quantos livros tem 100 a 300 paginas
    for(i = 0; i < 15; i++){
        if(livro[i].num >= 100 && livro[i].num <= 300){
            pag100 += 1;
        }
    }
    printf("Total de obras com 100 paginas até 300: %d \n", pag100);

    return 0;
}