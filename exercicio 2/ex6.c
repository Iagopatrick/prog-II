#include <stdio.h>

int main(){
    int a,b,c; 
    printf("Digite 3 valores: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    // if(a == b || b == c || c == a){
    //     if(a == b && b == c){
    //         printf("%d", a);
    //         printf("%d", b);
    //         printf("%d", c);
    //     }
    //     else if()
    // }
    printf("A ordem crescente desses numeros fica:\n");
    if(a <= b && a <= c){
        printf("%d\n", a);
        if(b < c || b == c){
            printf("%d\n", b);
            printf("%d", c);
        }
        else{
            printf("%d\n", c);
            printf("%d", b);
        }
    }
    else if(b <= a && b <= c){
        printf("%d\n", b);
        if(a < c || a == c){
            printf("%d\n", a);
            printf("%d", c);
        }
        else{
            printf("%d\n", c);
            printf("%d", a);
        }
    }
    else{
        printf("%d\n", c);
        if(a < b){
            printf("%d\n", a);
            printf("%d", b);
        }
        else{
            printf("%d\n", b);
            printf("%d", a);
        }
    }


    return 0;
}