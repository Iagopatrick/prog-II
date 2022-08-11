#include <stdio.h>
#include <stdlib.h>


int **alocamatriz(int m, int n){
    int **M;
    int i;
    M = (int **) malloc (m * sizeof(int *));
    if(M == NULL){
        printf("Memoria não existe");
        exit(1);
    }

    for(i = 0; i < m; i++){
        M[i] = (int *)malloc (n * sizeof(int));
        if(M[i] == NULL){
            printf("Memoria nã existe");
            exit(1);
        }
    }

    return M;
}


int **valormatriz(int **M, int m, int n){
    int i, j;
    printf("Digite os valores da matriz: \n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            do{
                scanf("%d", &M[i][j]);
            }while(M[i][j] < 0 || M[i][j] > 50);
        }

    }
    return M;
}




int *histograma(int **A, int m, int n){
    int *V;
    int maior, i, j, k;
    maior = A[0][0];
    for(i = 0; i < m; i++){
        for(j = 0; j < m; j++){
            if(maior < A[i][j]){
                maior = A[i][j];
            }
        }
    }

    V = (int *) malloc((maior + 1) * sizeof (int) );

    for(i = 0; i < maior + 1; i++){
        V[i] = 0;
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            for(k = 0; k < maior + 1; k++){
                if(A[i][j] == k){
                    V[k] += 1;
                }
            }
        }    

    }    
    return V;

}

int q1(){
    int m, n, i;
    int **M;
    int *V;
    printf("Digite o valor da linha e coluna:\n");
    scanf("%d %d", &m, &n);
    M = alocamatriz(m,n);
    M = valormatriz(M, m, n);
    V = histograma(M, m, n);

    printf("[ ");
    for(i = 0; i < 51; i++){
        printf("%d, ", V[i]);
    }
    printf(" ]");
}

// Questão B:
void FlipVertical(int **A, int m, int n){
    int temp = 0;
    int i, j, k, l;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            for(k = 0; k < m; k++){
                for(l = 0; l < n; l++){
                    temp = A[i][j];
                    A[i][j] = A[l][k];
                    A[l][k] = temp;
                }
                
            }
            
        }
    }
    printf("+\n");

    for(i = 0; i < m; i++){
        printf("| ");
        for(j = 0; j < n; j++){
            printf("%d ", A[i][j]);
        }
        printf("|\n");
    }
    printf("+");
}

void q2(){
    int **A;
    int m, n, i, j;
    printf("Digite o numero de linhas e colunas:\n");
    scanf("%d %d", &m, &n);
    A = alocamatriz(m, n);
    A = ValorMatrizq2(A, m, n);
    FlipVertical(A, m, n);
}


// Questão C;

void FlipHorizontal(int **A, int m, int n){
    int temp = 0;
    int i, j, k, l;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            for(k = 0; k < m; k++){
                for(l = 0; l < n; l++){
                    temp = A[j][i];
                    A[j][i] = A[k][l];
                    A[k][l] = temp;
                }
                
            }
            
        }
    }
    printf("+\n");

    for(i = 0; i < m; i++){
        printf("| ");
        for(j = 0; j < n; j++){
            printf("%d ", A[i][j]);
        }
        printf("|\n");
    }
    printf("+");

}

int **ValorMatrizq2(int **A, int m, int n){
    int i, j;
    printf("Digite o valor da sua matriz: \n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &A[i][j]);
        }

    }
    return A;
}


void q3(){
    int **A;
    int m, n, i, j;
    printf("Digite o numero de linhas e colunas:\n");
    scanf("%d %d", &m, &n);
    A = alocamatriz(m, n);
    A = ValorMatrizq2(A, m, n);
    FlipHorizontal(A, m, n);

}   



int main(){
    // q1();
    // q2();
    // q3();

}