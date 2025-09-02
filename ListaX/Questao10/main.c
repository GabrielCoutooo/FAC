/*Fazer uma função que, dados dois vetores A e B
com números inteiros, gerar o vetor C que
consiste na união dos dois primeiros.
Nota: considerar que não existe repetição no
conjunto A, nem no conjunto B.*/
#include <stdio.h>
#define TAM_MAX 20
int uniaoVetores(int vetorA[],int tamanhoA,int vetorB[],int tamanhoB,int vetorC[]);

int main(){
    int resultado,i,tamanhoA = 5, tamanhoB = 5;
    int A[TAM_MAX] = {1, 2, 3, 4, 5};
    int B[TAM_MAX] = {6, 7, 8, 9, 10};
    int C[2*TAM_MAX];
    printf("Vetor A: ");
    for(i=0;i<tamanhoA;i++){
        printf("%d ",A[i]);
        }
    printf("\n\nVetor B: ");
    for(i=0;i<tamanhoB;i++){
        printf("%d ",B[i]);
        }
    resultado = uniaoVetores(A,tamanhoA,B,tamanhoB,C);
    printf("\n\nUniao AB: ");
    for(i=0;i<resultado;i++){
        printf("%d ",C[i]);
    }
}

int uniaoVetores(int vetorA[],int tamanhoA,int vetorB[],int tamanhoB,int vetorC[]){
    int i,j;
    for(i = 0 ;i<tamanhoA;i++){
        vetorC[i] = vetorA[i];
    }
    for(j=0;j<tamanhoB;j++){
        vetorC[i+j]= vetorB[j];
    }
    return tamanhoA+tamanhoB;
}