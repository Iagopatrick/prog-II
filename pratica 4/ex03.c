#include <stdio.h>

float metade(float a){
    return a/2.0;
}

int main(){
    float v[10];
    
    for(int i = 0; i <= 9; i++){
        scanf("%f", &v[i]);
        v[i] = metade(v[i]);
        printf("%.2f\n", v[i]);
    }

    return 0;
}