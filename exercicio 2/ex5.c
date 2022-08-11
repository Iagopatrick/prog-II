#include <stdio.h>

int main(){
    int a,b,c; 
    printf("Digite 3 valores: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a > b && a > c){
        printf("%d e o maior", a);
    }
    else if(b > a && b > c){
        printf("%d e o maior", b);
    }
    else{
        printf("%d e o maior", c);
    }


    return 0;
}