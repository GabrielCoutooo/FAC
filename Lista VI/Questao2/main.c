/*Pede-se o desenvolvimento
de um programa que leia n valores e
determine o maior e o menor elementos
do conjunto fornecido.*/
#include <stdio.h>
int main(){
    int n,maior,menor,i,numeros;
    printf("Insira a quantidade de numeros que deseja analisar: ");
    scanf("%d",&n);
    printf("Insira o numero 1: ");
    scanf("%d",&numeros);
    maior = menor = numeros;
    for(i=2;i<=n;i++){
        printf("Insira o numero %d: ",i);
        scanf("%d",&numeros);

        if(numeros < menor){
            menor = numeros;
        }
        if(numeros > maior){
            maior = numeros;
        }
    }
    printf("O maior numero eh: %d \n",maior);
    printf("O menor numero eh: %d \n",menor);
}