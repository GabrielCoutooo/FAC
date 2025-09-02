/*QUESTÃO 06:
Faça uma função que, dado um vetor de reais,
altere todas as ocorrências do número A pelo
número B.*/
#include <stdio.h>
#define TAM_MAX 20
void trocarOcorrencias(int vetor[],int tamanho,int a,int b);
int main(){
    int i,tamanho,a,b,vetor[TAM_MAX];
    printf("Insira o tamanho do vetor: (Maximo %d posicoes): ",TAM_MAX);
    scanf("%d",&tamanho);
    printf("Insira o valor das %d posicoes do vetor: ",tamanho);
    for(i=0;i<tamanho;i++){
        scanf("%d",&vetor[i]);
        printf("%d ",vetor[i]);
    }
    printf("\nInsira o valor que deseja trocar: ");
    scanf("%d",&a);
    printf("Insira o valor em que deseja trocar as ocorrencias de %d: ",a);
    scanf("%d",&b);
    trocarOcorrencias(vetor,tamanho,a,b);
    for(i=0;i<tamanho;i++){
        printf("%d ",vetor[i]);
    }
}
void trocarOcorrencias(int vetor[],int tamanho,int a,int b){
    int i;
    for(i=0;i<tamanho;i++){
        if(vetor[i]==a){
            vetor[i]=b;
        }
    }
}