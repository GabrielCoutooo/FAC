/*O custo ao consumidor de um carro novo é a
soma do custo de fábrica com a porcentagem
do distribuidor e dos impostos (aplicados ao
custo de fábrica). Desenvolver um algoritmo
que calcule o custo ao consumidor de
determinado carro.*/
#include <stdio.h>

int main(){
    float custoFabrica, impostos, porcentagemDistribuidor, custo;
    printf("Insira o custo de fabrica: ");
    scanf("%f",&custoFabrica);
    printf("Insira o valor do imposto em porcentagem: ");
    scanf("%f",&impostos);
    impostos = (impostos /100) * custoFabrica;
    printf("Insira a porcentagem do distribuidor: ");
    scanf("%f",&porcentagemDistribuidor);
    porcentagemDistribuidor = (porcentagemDistribuidor/ 100) * custoFabrica;
    custo = custoFabrica + impostos + porcentagemDistribuidor;
    printf("O custo ao consumidor eh: %.2f!",custo);
}