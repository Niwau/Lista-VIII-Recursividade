#include <stdio.h>

/* Fazer uma função recursiva que,
dado um número inteiro N, exiba o mesmo na
base 2 (binária). */

void showBinarie(int number){
    if(number > 0){
        showBinarie(number / 2);
        printf("%d", number % 2);
    }
}

void main(){
    int number;
    printf("Insira um valor: ");
    scanf("%d", &number);
    showBinarie(number);
}
