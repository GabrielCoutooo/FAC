/*Faça um programa que leia
um número inteiro x e, em seguida, solicite
ao usuário outros 50 valores inteiros. Ao
final, o programa deve exibir o total de
múltiplos de x fornecidos.*/
#include <stdio.h>
#define valores 50

int main(){
    int x, i,valor, cont = 0;
    printf("Insira o valor x: ");
    scanf("%d", &x);
    for(i=1;i<=valores;i++){
        printf("Insira o valor %d: \n", i);
        scanf("%d", &valor);
        if(valor%x==0){
            cont++;
        }
    }
    printf("Dos valores inseridos %d sao multiplos de %d",cont,x);
}
