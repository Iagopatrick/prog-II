#include <stdio.h>


// Questão 1
void q1(){
    int i, j;
    float s[6][6], x, v[36];
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            scanf("%f", &s[i][j]);
        }   
    }
    printf("Digite o valor para multiplicar os valores da matriz: \t");
    scanf("%f", &x);
    i = 0;
    for(j = 0; j < 6; j++){
        for(int k = 0; k < 6; k++){
            v[i] = s[j][k] * x;
            i++;
        }
    }
   
    for(i = 0; i < 36; i++){
        printf("%.2f | ", v[i]);
    }
}

// Questão 2:
void q2(){
    float m[5][5];
    int i, j;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            scanf("%f", &m[i][j]);
            if(m[i][j] < 0){
                m[i][j] *= (-1);
            }
        }
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%0.2f | ", m[i][j]);
        }
    }

}

    
// Questão 3: 
void q3(){
    float m[5][5], temp;
    int i, j, k, l;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            scanf("%f", &m[i][j]);
        }
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            for(k = 0; k < 5; k++){
                for(l = 0; l < 5; l++){
                    if(m[i][j] < m[k][l]){
                        temp = m[i][j];
                        m[i][j] = m[k][l];
                        m[k][l] = temp;
                    }
                }
            }   
        }
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("| %.02f |", m[i][j]);
        }
        printf("\n");
    }

}

// Questão 4:
void q4(){
    float a[26][10], municipio_populoso, media_capital = 0;
    int i, j, indice_estado;


    for(i = 0; i < 26; i++){
        for(j = 0; j < 10; j++){
            scanf("%f", &a[i][j]);
        }   
    }


    municipio_populoso = a[0][0];
    indice_estado = 0;
    for(i = 0; i < 26; i++){
        for(j = 0; j < 10; j++){
            if(municipio_populoso < a[i][j]){
                municipio_populoso = a[i][j];
                indice_estado = i;
            }
        }
        media_capital += a[i][0];
    }

    printf("O municipio mais populoso e %.2f, que pertence ao estado %d\n", municipio_populoso, indice_estado);
    printf("A media da populacao nas respectivas capitais e %.2f", media_capital);
    
}

// Questão 5:
void q5(){
    int m, n, i, j, zero_linha = 0, zero_coluna = 0, n_linha = 0, n_coluna = 0;

    scanf("%d", &m);
    scanf("%d", &n);
    
    float a[m][n];

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%f", &a[i][j]);
        }
    }
    
    for(i = 0; i < m; i++){
        zero_linha = 0;
        zero_coluna = 0;
        for(j = 0; j < n; j++){
            if(a[j][i] == 0){
                zero_coluna += 1;
            }
            if(a[i][j] == 0){
                zero_linha += 1;
            }
        }
        if(zero_coluna == n){
            n_coluna += 1;
        }
        if(zero_linha == n){
            n_linha += 1;
        }
        
    }

    for(i = 0; i < m; i ++){
        for(j = 0; j < n; j ++){
            printf("%.1f  ", a[i][j]);
        }
        printf("\n");
    }

    printf("Numero de linhas(s) nulas da matriz %d\n", n_linha);
    printf("Numero de coluna(s) nulas da matriz %d", n_coluna);
     
}
// Questão 6:
void q6(){
    char prova[100][10], gabarito[10];
    int resultado[100];
    int i, j;
    printf("Matriz prova, entrada q1 | q2 | qn: \n");
    for(i = 0; i < 100; i++){
        for(j = 0; j < 10; j++){
            scanf("%c", &prova[j][i]);
            getchar();
        }
    }
    printf("\n Matriz gabarito: \n");
    for(i = 0; i < 10; i++){
        scanf("%c", &gabarito[i]);
        getchar();
    }

    for(i = 0; i < 100; i++){
        resultado[i] = 0;
        for(j = 0; j < 10; j++){
            if(prova[j][i] == gabarito[j]){
                resultado[i] += 1; 
            }
        }
    }
    for(i = 0; i < 100; i++){
        printf("A nota do aluno %d e %d\n", i+1, resultado[i]);
    }
}

// Questão 7:
void q7(){
    float m[5][5], Soma_l[5], Soma_c[5];
    int i, j;
    for( i = 0; i < 5; i++){
        for( j = 0; j < 5; j++){
            scanf("%f", &m[i][j]);
        }   
    }

    for( i = 0; i < 5; i++){
        Soma_l[i] = 0;
        Soma_c[i] = 0;
        for( j = 0; j < 5; j++){
            Soma_l[i] += m[i][j];
            Soma_c[i] += m[j][i];
        }   
    }

    for(i = 0; i < 5; i++){
        printf("Soma coluna %d: %.2f, Soma linha %d: %.2f\n", i + 1, Soma_l[i], i+1, Soma_c[i]);
    }
}

// Questão 8:
void q8(){
    float a[10][10], b[10][10], temp;
    int i, j;

    printf("Digite a primeira matriz:\n");
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            scanf("%f", &a[i][j]);
        }
    }
    printf("Digite a segunda matriz:\n");
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            scanf("%f", &b[i][j]);
        }
    }

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(!i == j && i < j){
                temp = a[i][j];
                a[i][j] = b[j][i];
                b[j][i] = temp;
            }
        }
    }
    printf("Matriz I: \n");
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%.2f | ", a[i][j]);
        }
        printf("\n");
    }
    printf("Matriz II: \n");
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%.2f | ", b[i][j]);
        }
        printf("\n");
    }
}

// Questão 9
void q9(){
    float D[6][6], distanciaPercorrida = 0;
    int viagem[6], i, j;

    printf("Digite a matriz das distancias das cidades");
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            scanf("%f", &D[i][j]);
        }

    }

    printf("\nDigite sua rota:");
    for(i = 0; i < 6; i++){
        scanf("%d", &viagem[i]);
    }


    for(i = 1; i < 6; i++){
        distanciaPercorrida += D[viagem[i - 1]][viagem[i]];
    }
    printf("%.2f", distanciaPercorrida);
}

// Questão 10:
void q10(){
    int n, i, j, k, l, magico = 1;

    printf("Digite qual o quadrado da matriz: \t");
    scanf("%d", &n);

    float m[n][n], soma_linha, soma_diagonalP = 0, soma_diagonalS = 0, soma_coluna;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%f", &m[i][j]);
            
        }
        printf("\n");
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            soma_diagonalP += m[i][i];
            soma_diagonalS += m[i][(n - 1) - i];
        }
    }

    for(i = 0; i < n; i++){
        soma_coluna = 0;
        soma_linha = 0;
        for(j = 0; j < n; j++){
            soma_coluna += m[j][i];
            soma_linha += m[i][j];
        }
        if(soma_coluna != soma_linha){
            magico = 0;
        }
    }

    if(magico == 1){
        if(soma_coluna == soma_diagonalP && soma_diagonalP == soma_diagonalP){
            magico = 1;
        }
    }
    if(magico == 1){
        printf("A matriz é um quadrado magico!");
    }
    else{
        printf("A matriz nao é um quadrado magico!");
    }

}

// Questão 11:
void q11(){
    float a[10][10], minimax, max;
    int i, j, i_max, coluna_minimax;

    printf("Digite a matriz: \n");

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            scanf("%f", &a[i][j]);
        }
    }    
    max = a[0][0];
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(max < a[i][j]){
                max = a[i][j];
                i_max = i;
            }
        }
    }    

    minimax = a[i_max][0];

    for(i = 0; i < 10; i++){
        if(minimax > a[i_max][i]){
            minimax = a[i_max][i];
            coluna_minimax = i;
        }
    }

    printf("O minimax da matriz e %.2f, que esta em [%d, %d]", minimax, i_max, coluna_minimax);
}

// Questão 12:
void q12(){
    float A[10][4], B[4][3], C[10][3], soma = 0;
    int i, j, k, l;

    printf("Digite os valores da matriz A:\n");
    for(i = 0; i < 10; i++){
        for(j = 0; j < 4; j++){
            scanf("%f", &A[i][j]);
        }    
    }

    printf("Digite os valores da matriz B:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            scanf("%f", &B[i][j]);
        }    
    }    

    for(i = 0; i < 4; i++){
        soma = 0;
        for(j = 0; j < 4; j++){
            for(k = 0; k < 10; k++){
                for(l = 0; l < 3; l++){
                    soma += A[k][j] * B[j][l];
                }    
            }
            C[i][j] = soma;    
        }
    }    

    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%.2f", C[i][j]);
        }
        printf("\n");
    }
}

// Questão 13:

void q13(){
    int i, j, k, l;
    float M[7][7], Soma = 0;

    printf("Digite os valores para Matriz  : \n");
    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 7; j++){
            scanf("%f",&M[i][j]);
        }
    }
    // a)
    for(int i; i < 7; i++){
        Soma += M[2][i];
    }
    printf("Soma da Terceira linha e : %.2f\n", Soma);

    // b)
    Soma = 0;
    for(int i; i < 7; i++){
        Soma += M[i][4];
    }
    
    printf("Soma da Quarta linha e : %.2f\n", Soma);
    // c)

    Soma = 0;

    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 7; j++){
            if ( i == j){
                for ( int k = 6; k > j; k--){
                    Soma += M[i][k];
                }
                
            }
            
        }
        
    }

    printf("Area de cima da diagonal principal : %.2f \n",Soma);

    // d)

    Soma = 0;
    for (int i = 6; i > 0; i--){
        for (int j = 0; j < 7; j++){
            if (i > 0 && j > 0){
                for (int k  = 0; k < i; k++){
                    Soma += M[i][k];
                }
            }
        }
    }
    printf("Area de cima da diagonal inversa : %.2f\n",Soma);
    // e)

    Soma = 0;
    for(int i = 0; i < 7; i++){
        for (int k = 0; k < 7; k++){
            Soma += M[i][k];
        }
    }
    printf("Soma de todos os valores da matriz e : %.2f\n", Soma);

    // f)
    Soma = 0;
    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 7; j++){
            if ( i == j){
                for ( int k = 0; k < j; k++){
                    Soma += M[i][k];
                }
                
            }
            
        }
        
    }
    printf("Area debaixo da diagonal principal e : %.2f\n", Soma);

    // g)

    Soma = 0;
    for (int i = 0; i < 7; i++){
        for (int j = 6; j > 0; j--){
            if (i > 0 && j > 0){
                for (int k  = 6; k < j; k--){
                    Soma += M[i][k];
                }
                       
            }
        }
    }
    printf("Area de baixo da diagonal inversa : %.2f\n",Soma);

    // h)
    Soma = 0;



    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 7; j++){
            if(i == j){
                for (int k = 6; k > j; k--){
                    Soma += M[i][k];
                }
            }
        }
    }
    printf("Soma da area superior entre diagonal principal e inversa : %.2f",Soma);
    // i)
    Soma = 0;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if(i == j){
                for (int k = 6; k > i; k--){
                    Soma += M[k][i];
                }
            }
        }
        
    }
    printf("Soma da area lateral direita entre diagonal principal e inversa : %.2f",Soma);
}


int main(){
    // q1();
    // q2();
    // q3();
    // q4();
    // q5();
    // q6();
    // q7();
    // q8();
    // q9();
    // q10();
    // q11();
    // q12();
    // q13();
    return 0;
}