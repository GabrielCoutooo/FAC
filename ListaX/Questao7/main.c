/*QUESTÃO 07:
Desenvolver uma função que remova
determinado elemento (todas as suas
ocorrências) de um vetor de float. Ao final,
retornar o número de remoções realizadas.*/
#include <stdio.h>
#define TAM_MAX 20
int removerOcorrencias(float vetor[],int *tamanho,int a);
int main(){
    int i,tamanho,resultado;
    float vetor[TAM_MAX],a;
    printf("Insira o tamanho do vetor: (Maximo %d posicoes): ",TAM_MAX);
    scanf("%d",&tamanho);
    printf("Insira o valor das %d posicoes do vetor: ",tamanho);
    for(i=0;i<tamanho;i++){
        scanf("%f",&vetor[i]);
        printf("%.1f ",vetor[i]);
    }
    printf("\nInsira o valor que deseja remover: ");
    scanf("%f",&a);
    resultado = removerOcorrencias(vetor,&tamanho,a);
    for(i=0;i<tamanho;i++){
        printf("%.1f ",vetor[i]);
    }
    printf("\nForam removidos %d ocorrencias do numero %.1f",resultado,a);
}
int removerOcorrencias(float vetor[],int *tamanho,int a){
    int i,j,cont =0;
    for(i=0;i<*tamanho;i++){
        if(vetor[i]==a){
            for(j=i;j<*tamanho-1;j++){
                vetor[j]=vetor[j+1];
            }
            (*tamanho)--;
            i--;
            cont++;
        }
    }
    return cont;
}