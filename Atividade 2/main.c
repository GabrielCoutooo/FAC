/*Desenvolver um programa que, dados dois números inteiros (fornecidos pelo usuário), exiba os números
compreendidos entre a e b, porém “pulando” alguns dos valores do intervalo, e, ao final, apresente a quantidade de
elementos exibidos, conforme os exemplos abaixo:
Exemplo 1:
a = 10
b = 30
Números exibidos:
10, 11, 13, 16, 20, 25
Além de exibir os valores acima, o programa deve apresentar, nesse caso, o número 6 (pois 6 valores foram
exibidos).
Exemplo 2:
a = 1
b = 40
Números exibidos:
1, 2, 4, 7, 11, 16, 22, 29, 37
Além de exibir os valores acima, o programa deve apresentar, nesse caso, o número 9 (pois 9 valores foram
exibidos).
Nota: observem que o primeiro valor exibido consiste em a. O próximo, será o valor anterior acrescido de 1 unidade; o
seguinte consistirá no último acrescido de duas unidades e, assim, sucessivamente. A sequência terminará de forma que
nenhum número superior a b seja exibido.*/
#include <stdio.h>
int main(){
    int a, b, i,incremento, cont = 0;
    printf("Insira o valor de a: ");
    scanf("%d", &a);
    printf("Insira o valor de b: ");
    scanf("%d", &b);
    for(i=a;i<=b;i++){
        printf("%d ", i);
        i+= incremento;
        incremento++;
        cont++;
    }
    printf("\nForam exibidos %d numeros!",cont);
}