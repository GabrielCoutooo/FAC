/*Considere a existência de dois conjuntos
numéricos A e B contendo n1 e n2 elementos,
respectivamente. Pede-se o desenvolvimento
de uma função que determine se um dos
conjuntos está contido no outro, retornando os
seguintes códigos:
 1, se A estiver contido em B;
 2, se B estiver contido em A;
 0, caso contrário.*/
#include <stdio.h>
#define TAM 10
int contido(int vetorA[],int tamanhoA,int vetorB[],int tamanhoB);
int funcao02(int vetorA[],int tamanhoA,int vetorB[],int tamanhoB);
int buscar(int vetor[],int tamanho,int numero);
int main(){
    int i,vetorA[TAM],vetorB[TAM],resultado;
    printf("Insira o conjunto A com %d elementos:  ",TAM);
    for(i=0;i<TAM;i++){
        scanf("%d",&vetorA[i]);
    }
    printf("Insira o conjunto B com %d elementos:  ",TAM);
    for(i=0;i<TAM;i++){
        scanf("%d",&vetorB[i]);
    }
     resultado = funcao02(vetorA, TAM, vetorB, TAM);
    switch (resultado) {
        case 1:
            printf("O conjunto A está contido no conjunto B.\n");
            break;
        case 2:
            printf("O conjunto B está contido no conjunto A.\n");
            break;
        case 0:
            printf("Nenhum conjunto está contido no outro.\n");
            break;
    }
}
int funcao02(int vetorA[],int n1,int vetorB[],int n2){
    if(contido(vetorA,n1,vetorB,n2)==1){
        return 1;
    }else{
        if(contido(vetorB,n2,vetorA,n1)==1){
            return 2;
        }
        else{
            return 0;
        }
    }
}
int contido(int vetorA[],int tamanhoA,int vetorB[],int tamanhoB){
    int i,cont=0;
    for(i=0;i<tamanhoA;i++){
        if(buscar(vetorB,tamanhoB,vetorA[i])!=0){
            cont++;
        }
    }
    if(cont==tamanhoA){
        return 1;
    }
    else{
        return 0;
    }
}
int buscar(int vetor[],int tamanho,int numero){
    int i;
    for(i=0;i<tamanho;i++){
        if(vetor[i]==numero){
            return 1;
        }
    }
    return 0;
}