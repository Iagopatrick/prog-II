#include <stdio.h>
int main(){
    int A, B, C;
    printf("Digite os valores dos lados do possivel triangulo: \n");
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    

    if((A == B + C || B == A + C || C == B + A) || (A > B + C || B > A + C || C > B + A)){
        printf("Valores nao podem formar um triangulo.");

    }
    else{
        // equilatero
        if (A == B && C == B){
            printf("Triangulo equilatero.");
        }
            
    
        //Isoceles
        else if((A == B && A != C) || (A == C && A != B) || (C == B && C != A) || (B == A && B != C)){
            printf("Triangulo isosceles.");

        }
            
        //Escaleno
        else{
            printf("Triangulo escaleno.");
        }
    }
       
    
    return 0;
}




        

