/*Escrever um algoritmo que, dada uma quantia
em reais, calcule o menor número possível de
notas/moedas (100, 50, 20, 10, 5, 2 e 1) em que
o valor pode ser decomposto.*/
#include <stdio.h>
int main(){
    int qtd,valor,notas[7] = {100,50,20,10,5,2,1};
    printf("Digite o Valor desejado: ");
    scanf("%d", &valor);
    for(int i = 0; i < 7; i++){
        qtd = valor / notas[i];
        valor = valor % notas[i];
        printf("%d nota(s) de R$ %.2d\n", qtd, notas[i]);
    }
    return 0;
}