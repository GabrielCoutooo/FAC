/*Implementar um programa
que calcule o valor de base^expoente, onde
base e expoente são números inteiros
dados pelo usuário.*/
#include <stdio.h>
int main(){
    int base, expoente, resultado = 1;
    printf("Insira o valor da base: ");
    scanf("%d", &base);
    printf("Insira o valor do expoente: ");
    scanf("%d",&expoente);
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    printf("Resultado: %d",resultado);
}