/*QUESTÃO 01:
Desenvolver uma função que determine o
número de ocorrências de um número inteiro x
em um vetor A.*/
#include<stdio.h>
int numOcorrencias(int x,int vetor[],int tamanho);

int main(){
    int x,resultado=0;
    int vetor[]={1,1,1,1,1,1,2,4,6,2};
    printf("Insira o numero que deseja procurar no vetor: ");
    scanf("%d",&x);
    resultado = numOcorrencias(x,vetor,10);
    printf("Foram encontradas %d ocorrencias de %d!\n\n",resultado,x);
}
int numOcorrencias(int x,int vetor[],int tamanho){
    int i,cont = 0;
    for(i=0;i<tamanho;i++){
        if(vetor[i]==x){
            cont++;
        }
    }
    return cont;
}