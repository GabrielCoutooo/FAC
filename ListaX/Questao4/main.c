/*QUESTÃO 04:
Fazer uma função que armazene em um vetor
os 50 primeiros termos da seguinte sequência:
S = 1, 2, 4, 7, 11, 16, ...

Nota: observem que a diferença entre o 1o e 2o
elementos é igual a 1, entre o 2o e 3o é igual a
2, entre o 3o e o 4o é igual a 3, e assim
sucessivamente.*/
#include <stdio.h>

void sequencia(int vetor[],int tamanho);

int main(){
    int tamanho = 50,i,vetor[tamanho];
    sequencia(vetor,tamanho);
    printf("Vetor: ");
    for(i=0;i<tamanho;i++){
        printf("%d ",vetor[i]);
    }
}

void sequencia(int vetor[],int tamanho){
    int i,incremento=1;
    vetor[0] = 1;
    for(i=1;i<tamanho;i++){
        vetor[i]=vetor[i-1]+incremento;
        incremento++;
    }
}