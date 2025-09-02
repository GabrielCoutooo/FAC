/*Desenvolver um programa que, dado um número inteiro n, exiba um triângulo conforme ilustrado pelo exemplo a
seguir:
n = 7
1
2 1
1 2 3
4 3 2 1
1 2 3 4 5
6 5 4 3 2 1
1 2 3 4 5 6 7 */
#include <stdio.h>
int main(){
    int n, i, j;
    printf("Insira um valor n: ");
    scanf("%d", &n);
    for(j = 1; j<= n;j++){
        if(j%2 != 0){
            for(i = 1; i <= j; i++){
                printf("%d ", i);
            }
        }
        else{
            for(i = j; i >= 1; i--){
                printf("%d ", i);
            }
        }
        printf("\n");
    }
}