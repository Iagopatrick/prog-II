#include <stdio.h>

void display(int num[10]); //protótipo da função
void display(int num[10]){
    int i;
        for(i=0;i<5;i++){
    printf("%d ",num[i]);
    }
}
int main(){
    int t[5],i;
    for(i=0; i<5 ;i++){
        t[i]=i;
    }
    display(t);
    return 0;
}




