/*Faça um programa que leia
200 números inteiros. Ao final, exibir:
a) O maior número fornecido, de
ordem par (isto é, o maior dentre o
segundo, quarto, sexto, oitavo, etc
valores fornecidos).
b) A média dos valores pares.*/
#include <stdio.h>
#define numeros 200
int main(){
    int i, n, maior = 0, somaPares = 0, contPares = 0;
    float mediaPares;
    for( i=1;i<=numeros;i++){
        printf("Digite o numero %d: ",i);
        scanf("%d",&n);
        if(n%2==0){
            somaPares += n;
            contPares++;
            if(i % 2== 0){
                if(n > maior){
                    maior = n;
                }
            }
        }
    }
    mediaPares = somaPares/contPares;
    printf("A media dos numeros pares eh: %d\n",mediaPares);
    printf("O maior numero fornecido de ordem par eh: %d",maior);
}