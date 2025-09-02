/*Implementar uma função que, dado um vetor
contendo números reais, determine o maior e o
segundo maior elementos.
Nota: considerar que não há repetição de
elementos no vetor.*/

#include <stdio.h>
#define TAM 10
int questao05(int vetor[],int tamanho,int *maior,int *segundoMaior);
int main(){
    int i,vetor[TAM],maior,segundoMaior;
    printf("Insira os %d numeros do vetor: ",TAM);
    for(i = 0;i<TAM;i++){
        scanf("%d",&vetor[i]);                                                   
    }
    questao05(vetor,TAM,&maior,&segundoMaior);
    printf("Maior Elemento eh: %d\n",maior);
    printf("Segundo maior Elemento eh: %d\n",segundoMaior);
}
int questao05(int vetor[],int tamanho,int *maior,int *segundoMaior){
    if(vetor[0] > vetor[1]){
        *maior = vetor[0];
        *segundoMaior = vetor[1];
    }
    else{
        *maior = vetor[1];
        *segundoMaior = vetor[0];
    }
    for(int i = 2;i<tamanho;i++){
        if(vetor[i] > *maior){
            *segundoMaior = *maior;
            *maior = vetor[i];
        }
        else if(vetor[i]>*segundoMaior){
            *segundoMaior = vetor[i];
        }
    }
}