/*Desenvolver uma função que, dado um número inteiro n, determine o seu maior algarismo, assim como o menor.
Nota: apresentar a main chamando a função implementada.*/
#include <stdio.h>

void MaiorMenorAlgarismo(int n,int *maior,int *menor);

int main(){
    int n, maior, menor;
    printf("Insira o valor de n: ");
    scanf("%d", &n);
    MaiorMenorAlgarismo(n, &maior, &menor);
    printf("O maior algarismo eh: %d\n", maior);
    printf("O menor algarismo eh: %d\n", menor);
}
void MaiorMenorAlgarismo(int n,int *maior,int *menor){
    int temp;
    *maior = 0;
    *menor = 10;
    while(n > 0){
        temp = n % 10;
        if(temp > *maior){
            *maior = temp;
        }
        if(temp < *menor){
            *menor = temp;
        }
        n /= 10;
    }
}