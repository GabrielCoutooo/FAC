/*Um fazendeiro realizou um
tratamento sobre sua plantação de café
que gerou um crescimento constante de C
% em sua produção, por ano.
Considerando que atualmente sua
produção anual seja de M u.p.,
implementar um programa que determine
a quantidade de anos necessária para que
a produção duplique.*/
#include <stdio.h>
int main(){
    int anos = 0;
    float producaoInicial,producao,taxa;
    printf("Insira a Producao inicial: ");
    scanf("%f",&producaoInicial);
    printf("Digite a taxa de crescimento em %%: ");
    scanf("%f",&taxa);
    producao = producaoInicial;
    while(producao < 2*producaoInicial){
        producao += producao*(taxa/100);
        anos++;
        printf("Ano %d: producao: %.1f",anos,producao);
    }
    printf("Sera necessario %d anos para dobrar a producao inicial!",anos);
}