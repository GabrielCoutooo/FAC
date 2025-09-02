/*Joãozinho investiu Q reais em
uma aplicação com rendimento fixo de R% ao
mês. Pede-se a implementação de um
programa que calcule o valor (e exiba-o)
disponível na conta de Joãozinho após A anos
de investimento.*/
#include <stdio.h>
int main(){
float quantia,rendimento;
int anos,meses,i;
printf("Insira o valor do investimento: ");
scanf("%f",&quantia);
printf("Insira o rendimento mensal: ");
scanf("%f",&rendimento);
printf("Insira o tempo de investimento em anos: ");
scanf("%d",&anos);
meses = anos*12;
for(i=1;i<=meses;i++){
    quantia += quantia*(rendimento/100);
}
printf("O valor disponivel na conta de Joaozinho apos %d anos de investimento eh: %.2f",anos,quantia);
}
