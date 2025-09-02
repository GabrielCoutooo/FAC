/*Construir um algoritmo que calcule o peso ideal
de uma pessoa, de acordo com o seu gênero e
altura, utilizando as seguintes fórmulas:
 para homens: (72.7*h)-58
 para mulheres: (62.1*h)-44.7*/
#include <stdio.h>

int main(){
    float altura,pesoideal;
    char sexo;
printf("Insira sua altura: ");
scanf("%f",&altura);
printf("Insira 'h'para homem e 'm' para mulher: ");
fflush(stdin);
scanf("%c",&sexo);
if(sexo == 'h' || sexo == 'H'){
pesoideal = (72.7*altura)-58;
printf("Seu peso ideal é %.2f!",pesoideal);
}else 
if(sexo =='m' || sexo == 'M'){
    pesoideal = (62.1*altura)-44.7;
    printf("Seu peso ideal é %.2f!",pesoideal);
}
}