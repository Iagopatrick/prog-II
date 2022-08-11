#include <stdio.h>
#include <string.h>







int main(){
    char a[50], b[50];
    getchar();
    fgets(a, 50, stdin);
    getchar();
    fgets(b, 50, stdin);
    
    if(strcmp(a, b) == 1){
        printf("True");
    }
    else{
        printf("False");
    }

    return 0;
}