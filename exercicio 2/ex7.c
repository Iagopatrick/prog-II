#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    printf("Digite dois valores para avaliarmos qual dos dois, elevado ao quadrado, e o menor: ");
    scanf("%d", &a);
    scanf("%d", &b);

    if(pow(a, 2) > pow(b, 2)){
        printf("O menor valor e %d, pois elevado ao quadrado e %.2f", b, pow(b , 2));
    }
    else{
        printf("O menor valor e %d, pois elevado ao quadrado e %.2f", a, pow(a , 2));
    }





    return 0;
}