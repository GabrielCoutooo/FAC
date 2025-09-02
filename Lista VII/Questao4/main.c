/*Faça um programa que leia
um número inteiro N e informe se o
mesmo é ou não primo.
Nota: um número é dito primo quando for
divisível apenas por 1 e por ele mesmo.*/
#include <stdio.h>
int main(){
    int n, i, cont = 0;
    printf("Insira um numero n: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            cont++;
        }
    }
    if( cont == 2){
        printf("%d e primo!", n);
    }else
    printf("%d nao eh primo!",n);
}