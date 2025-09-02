/*QUESTÃO 02:
Elabore um algoritmo que, dada a idade de um
nadador, classifique-o em uma das seguintes
categorias:
Categoria Faixa de idade
infantil A  0 - 4 anos
infantil B  5 - 7 anos
infantil C  8-10 anos
juvenil A  11-13 anos
juvenil B  14-17 anos
Adulto 18 anos ou mais*/
#include <stdio.h>

int main() {
    int idade, categoria;

    printf("Insira a idade do nadador: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 4) {
        categoria = 1; 
    } else
    if (idade >= 5 && idade <= 7) {
        categoria = 2; 
    } else 
    if (idade >= 8 && idade <= 10) {
        categoria = 3; 
    } else 
    if (idade >= 11 && idade <= 13) {
        categoria = 4;
    } else 
    if (idade >= 14 && idade <= 17) {
        categoria = 5; 
    } else {
        categoria = 6;
    }

    switch (categoria) {
        case 1:
            printf("A categoria do nadador é: Infantil A\n");
            break;
        case 2:
            printf("A categoria do nadador é: Infantil B\n");
            break;
        case 3:
            printf("A categoria do nadador é: Infantil C\n");
            break;
        case 4:
            printf("A categoria do nadador é: Juvenil A\n");
            break;
        case 5:
            printf("A categoria do nadador é: Juvenil B\n");
            break;
        case 6:
            printf("A categoria do nadador é: Adulto\n");
            break;
    }

    return 0;
}
