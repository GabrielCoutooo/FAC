/*Desenvolver um programa no qual o
usuário entre com vários números inteiros
e positivos e imprima o produto dos
números ímpares e a soma dos números
pares.*/
#include <stdio.h>
int main(){
    int i,n,numeros,soma = 0,numimpares = 1;
    printf("Insira a quantidade de numeros a serem inseridos: ");
    scanf("%d",&n);
    printf("Insira %d numeros:\n",n);
    for(i=1;i<=n;i++){
        printf("Numero %d: ",i);
        scanf("%d",&numeros);
        if(numeros%2==0){
            soma += numeros;
        }else{
            numimpares *= numeros;
        }
    }
 if (numimpares == 1 && n > 0) {
        numimpares = 0;
        printf("Nao foram inseridos numeros impares!\n"); 
    }
    printf("Soma dos pares: %d \n",soma);
    printf("Produto dos impares: %d \n",numimpares);
}