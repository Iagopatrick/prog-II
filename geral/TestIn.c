#include <stdio.h>
#include <stdlib.h>
//----FUNCOES GENERICAS-----
int **AlocarMatriz(int l, int c){
    int **M;
    int i;
    M = (int**)malloc(l * sizeof(int *));
    if(M == NULL){
        printf("Sem memoria \n");
        exit(1);
    }
    for ( i = 0; i < l; i++){
        M[i] = (int*)malloc(c * sizeof(int*));
        if(M[i] == NULL){
            printf("Sem Memoria \n");
            exit(1);
        }
    }
    return M;
}

void LiberarMemoriaM(int **M,int l){
    for (int i = 0; i < l; i++){
        free(M[i]);
    }
    free(M);
}
//------------QUESTAO 1 -------------------------//

int *histograma(int **M, int l, int c){
    int *V = NULL;
    int PrV = 0 ,maior = M[0][0];
    for (int  i = 0; i < l; i++){
        for (int  j = 0; j < c; j++){
            if(maior < M[i][j]){
                maior = M[i][j];
            }
        }
    }
    maior++;
    V = (int *)malloc( maior * sizeof(int));
    for (int i = 0; i < maior; i++){
        V[i] = 0;
    }
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            for(int o = 0; o < maior; o++){
                if(M[i][j] == o){
                    V[o]++;
                }
            }
        }
    }

    printf("O histograma e : [");
    for (int i = 0; i < maior; i++){
        printf("%d, ",V[i]);
    }
    printf("]");
    
    return V;
}

void ImprimirM(int **M,int l,int c){
    int i, j;
    printf("Sua matriz e : \n");
    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            printf("%d \t", M[i][j]);
        }
		printf("\n");
	}
}

int **AdicionarValorM(int **M,int l,int c){
    int valor = -1;
    printf("Digite valores para sua matriz : \n");
    for (int i = 0; i < l; i++){
        for (int k = 0; k < c; k++){
            scanf("%d",&valor);
            if(valor >= 0 && valor <=50){
                M[i][k] = valor;
            }else{
                printf("digite um valor valido entre 0 e 50\n");
                k--;
            }
        }
    }
    return M;
}





int Exercicio1(){
    int l,c;
    int **M;
    int *V;
    printf("Digite o tamanho da sua matriz Linha | coluna :  ");
    scanf("%d %d",&l,&c);
    M=AlocarMatriz(l,c);
    M=AdicionarValorM(M,l,c);
    ImprimirM(M,l,c);
    V=histograma(M,l,c);
    LiberarMemoriaM(M,l);
    free(V);
}
//---------------QUESTAO 2--------------------------//

void FlipHorizontal(int **M, int l, int c){
    int Aux = 0;

    for(int i = 0; i < c; i++){
        for(int j = 0; j < l; j ++){
            for(int k = 0; k < c; k++){
                for(int o = 0; o < l; o++){
                    Aux = M[j][i];
                    M[j][i] = M[o][k];
                    M[o][k] = Aux;
                }

            }

        }
    }
}



void FlipVertical(int **M, int l, int c){
    int Aux = 0;

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j ++){
            for(int k = 0; k < l; k++){
                for(int o = 0; o < c; o++){
                    Aux = M[i][j];
                    M[i][j] = M[k][o];
                    M[k][o] = Aux;
                }

            }

        }
    }
}


int **AlocValorM(int **M,int l,int c){
    for(int i = 0;i < l; i ++){
        for (int j = 0; j <c; j++){
            scanf("%d",&M[i][j]);
        }
    }
}

int Exercicio2(){
    int l,c;
    int **M;
    printf("Digite o tamanho da sua matriz m|n");
    scanf("%d %d",&l,&c);
    M=AlocarMatriz(l,c);
    AlocValorM(M,l,c);
    FlipVertical(M,l,c);
    ImprimirM(M,l,c);
}


int main(){
    //Exercicio1();
    Exercicio2();
}