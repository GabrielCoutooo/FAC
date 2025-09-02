/*Fazer um programa que exiba todos os
divisores de um número fornecido pelo
usuário.*/
#include <stdio.h>
int main(){
    int n, i;
    printf("Insira o valor de N: ");
    scanf("%d", &n);
    printf("Os divisores de %d sao: ", n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d ", i);
        }
    }
}