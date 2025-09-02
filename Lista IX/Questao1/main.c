/*QUESTÃO 01:
Desenvolver uma função que, dado um número
inteiro n, exiba todos os números existentes no
intervalo definido por a e b (a < b), exceto
aqueles que forem múltiplos de n.*/
#include <stdio.h>

void exibirIntervalo(int n,int a,int b);

int main(){
    int n,a,b;
    printf("Insira o n: \n");
    scanf("%d",&n);
    printf("Insira o intervalo A e B \n");
    scanf("%d %d",&a,&b);
    exibirIntervalo(n,a,b);
}
void exibirIntervalo(int n, int a, int b){
    int i;
    for(i=a;i<=b;i++){
        if(i%n!=0){
            printf("%d \n\n",i);
        }
    }
}