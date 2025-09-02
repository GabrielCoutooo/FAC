/*Dado um vetor contendo números reais, desenvolver uma função que determine o maior valor do vetor inferior à
média de seus elementos, assim como o menor que seja superior a esta média.
Nota: apresentar a main chamando a função implementada.*/
#include <stdio.h>
#include<limits.h>
#define TAM_MAX 50
int verificarMaiorMenor(int vetor[],int tamanho,int *maior, int *menor);

int main(){
    int i,tamanho,vetor[TAM_MAX],maior,menor;
    float media;
    printf("Insira o tamanho do vetor: (Maximo %d posicoes): ",TAM_MAX);
    scanf("%d",&tamanho);
    printf("Insira o valor das %d posicoes do vetor: ",tamanho);
    for(i=0;i<tamanho;i++){
        scanf("%d",&vetor[i]);
    }
    media = verificarMaiorMenor(vetor,tamanho,&maior,&menor);
    printf("Media: %.2f\n",media);// Não foi pedido mas só para testar
    printf("Maior valor inferior a media: %d\n",maior);
    printf("Menor valor superior a media: %d\n",menor);
}
int verificarMaiorMenor(int vetor[],int tamanho,int *maior, int *menor){
    int i,soma = 0;
    float media;
    *maior = INT_MIN;
    *menor = INT_MAX;
    for(i =0;i<tamanho;i++){
        soma += vetor[i];
    }
    media = (float)soma/tamanho;
    for(i =0;i<tamanho;i++){
        if(vetor[i] < media && vetor[i] > *maior){
            *maior = vetor[i];
        }
        if(vetor[i]>media && vetor[i]<*menor){
            *menor = vetor[i];
        }
    }
    return media;
}