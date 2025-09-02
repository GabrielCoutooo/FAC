/*QUESTÃO 11:
Fazer uma função que, dados dois vetores A e B
com números inteiros, gerar o vetor C que
consiste na intersecção dos dois primeiros.
Nota: considerar que não existe repetição no
conjunto A, nem no conjunto B.*/
#include <stdio.h>
#define TAM_MAX 20
int intercecaoVetores(int vetorA[],int tamanhoA,int vetorB[],int tamanhoB,int vetorC[]);

int main(){
    int resultado,i,tamanhoA = 5, tamanhoB = 5;
    int A[TAM_MAX] = {1, 2, 2, 4, 5};
    int B[TAM_MAX] = {2, 4, 9, 8, 10};
    int C[2*TAM_MAX];
    printf("Vetor A: ");
    for(i=0;i<tamanhoA;i++){
        printf("%d ",A[i]);
        }
    printf("\n\nVetor B: ");
    for(i=0;i<tamanhoB;i++){
        printf("%d ",B[i]);
        }
    resultado = intercecaoVetores(A,tamanhoA,B,tamanhoB,C);
    printf("\n\nIntercecao AB: ");
    for(i=0;i<resultado;i++){
        printf("%d ",C[i]);
    }
}

int intercecaoVetores(int vetorA[],int tamanhoA,int vetorB[],int tamanhoB,int vetorC[]){
    int i,j,k=0;
    for(i = 0 ;i<tamanhoA;i++){
        for(j=0;j<tamanhoB;j++){
            if(vetorA[i] == vetorB[j]){
                vetorC[k]=vetorA[i];
                k++;
            }
        }
    }
    return k;
}
