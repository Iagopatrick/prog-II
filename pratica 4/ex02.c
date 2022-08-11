#include <stdio.h>

float quadrado(float a){
    return a * a;
}

int main(){
    float v[10];
    
    for(int i = 0; i <= 9; i++){
        scanf("%f", &v[i]);
        v[i] = quadrado(v[i]);
        printf("%.2f\n", v[i]);
    }

    return 0;
}