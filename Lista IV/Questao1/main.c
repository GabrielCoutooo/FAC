/*Faça um programa que leia um
número inteiro positivo N e exiba todos os
múltiplos de Y inferiores a N, onde N e Y são
fornecidos pelo usuário.*/
#include <stdio.h>
int main(){
    int n,y,i;
    printf("Insira um numero inteiro positivo n: ");
    scanf("%d", & n);
    printf("Insira o valor de y: ");
    scanf("%d", & y);
    if(n <= 0 || y <= 0){
        printf("O numero %d e invalido", n);
    }else{
         printf("Multiplos de %d menores que %d: ", y, n);
        for(i=y;i<n;i+=y){
            printf("%d ",i);
        }
    }
}