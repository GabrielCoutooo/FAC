/*Desenvolver um programa que calcule a
soma dos números de 1 a N, sendo N um
número inteiro fornecido pelo usuário.*/
#include <stdio.h>
int main(){
    int n,i,soma = 0;
    printf("Digite um valor para N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        soma += i;
        printf("%d + ",i);
    }
    printf(" A soma dos numeros de 1 a %d eh %d.\n",n,soma);
}