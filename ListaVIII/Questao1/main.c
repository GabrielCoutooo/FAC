/*QUESTÃO 01:
Desenvolver uma função que exiba os múltiplos
de N compreendidos no intervalo definido por
A e B.*/
#include <stdio.h>
// Protótipo da função
void multiplos(int n, int a, int b);

int main(){
    int n,a,b,multiplo;
    printf("Insira o n: ");
    scanf("%d",&n);
    printf("Insira o intervalo A e B: ");
    scanf("%d %d",&a,&b);
    multiplos(n,a,b);
}
void multiplos(int n, int a, int b){
    int i;
    for(i = a; i<= b; i++){
        if(i % n == 0){
            printf("%d ",i);
        }
    }
}
