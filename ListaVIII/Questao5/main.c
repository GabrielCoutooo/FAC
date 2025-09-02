/*QUESTÃO 05:
Fazer uma função que calcule o MMC (mínimo
múltiplo comum) entre dois números.*/
#include <stdio.h>
int MMC(int a, int b);

int main(){
    int a, b,resultado;
    printf("Digite os numeros que deseja fazer o MMC: ");
    scanf("%d %d", &a, &b);
    resultado = MMC(a,b);
    printf("O MMC entre %d e %d eh: %d",a,b,resultado);
}
int MMC(int a, int b){
int i,maior,menor,mmc,piorcaso;
if(a>b){
    maior=a;
}else{
    maior=b;
}
piorcaso = a*b;
for(i = maior;i<= piorcaso ;i++){
    if(i%a == 0 && i%b == 0){
        return i;
    }
}
}