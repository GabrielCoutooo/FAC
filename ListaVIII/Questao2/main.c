/*QUESTÃO 02:
Implementar uma função que converta
determinada temperatura em graus Celsius
para graus Fahrenheit.*/
#include <stdio.h>
float conversorTemp(float tempC);

int main(){
    float tempC,tempF;
    printf("Insira a temperatura em Celsius: ");
    scanf("%f",&tempC);
    tempF = conversorTemp(tempC);
    printf("%.1f oC em fahrenheit eh: %.1f oF!",tempC,tempF);
}

float conversorTemp(float tempC){
    float tempF = (tempC * 1.8) + 32;
    return tempF;
}