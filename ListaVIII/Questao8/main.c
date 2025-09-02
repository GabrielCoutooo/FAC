/*QUESTÃO 08:
Desenvolver uma função que exiba todos os
números primos inferiores a determinado valor
inteiro N.*/
#include <stdio.h>

void exibirPrimos(int n);

int main(){
    int n;
    printf("Insira um numero: ");
    scanf("%d",&n);
    exibirPrimos(n);
}
void exibirPrimos(int n){
    int i,j,cont;
    for(i=2;i<=n;i++){
        cont = 0;
        for(j=1;j<=n;j++){
            if(i % j == 0){
                cont++;
            }
        }
        if(cont == 2){
            printf("%d ",i);
        }
    }
    printf("\n");
}