/*Implementar um programa que exiba os N
primeiros termos de uma PA (Progressão
Aritmética) com primeiro termo a1 e razão
r.*/
#include <stdio.h>
int main(){
    int n, a1, r, i, termo;
    printf("Insira o valor de N(Ate qual numero na sequencia da PA): ");
    scanf("%d", &n);
    printf("Insira o valor do a1: ");
    scanf("%d", &a1);
    printf("Insira o valor de r: ");
    scanf("%d", &r);
    termo = a1;
    for(i=0;i<n;i++){
        printf("%d ", termo);
        termo +=r;
    }
}