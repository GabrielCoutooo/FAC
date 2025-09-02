/*Implementar uma função que, dado um
número inteiro n, e o intervalo definido pelos
números a e b, determine quantos valores do
intervalo possuem divisores (sendo estes
diferentes de 1) que também sejam divisores
de n.*/
#include <stdio.h>
int contDivisores(int n ,int a,int b);

int main(){
    int n,a,b,resultado;
    printf("Insira o numero inteiro n: ");
    scanf("%d",&n);
    printf("Insira o intervalo definido pelos numeros a e b: ");
    scanf("%d %d",&a,&b);
    resultado = contDivisores(n,a,b);
    printf("No intervalo %d %d tem %d divisores de %d",a,b,resultado,n);
}

int contDivisores(int n, int a, int b){
    int i,j,cont=0;
    for(i=a;i<=b;i++){
        for(j=2;j<=n;j++){
            if((i%j==0) && (n%j==0)){
                cont++;
                break;
            }
        }
    }
    return cont;
}