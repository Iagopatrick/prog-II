#include <stdio.h>

void inverso(float v[], int x){
    
    int i;
    printf("Ordem inversa: [\t");
    for(i = x - 1; i >= 0; i--){
        printf("%.2f, ", v[i]);
    }
    printf("]");
    
}



int main(){
    float ve[10];
    int i;

    printf("Digite o valores do vetor: \n");
    for(i = 0; i < 10; i++){
        scanf("%f", &ve[i]);
    }
    printf("Ordem normal: [\t");
    for(i = 0; i < 10; i++){
        printf("%.2f, ", ve[i]);
    }
    printf("]");

    inverso(ve, 10);



    return 0;
}