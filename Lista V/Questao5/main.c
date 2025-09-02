/*Criar um programa que exiba os N
primeiros termos da seguinte série:
1,2,4,8,16,32,...*/
#include <stdio.h>
int main(){
    int n, i,termo =1;
    printf("Quantos termos deseja exibir? ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("%d ",termo);
        termo*=2;
    }
}