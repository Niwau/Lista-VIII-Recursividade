#include <stdio.h>

/* Fazer uma fun��o recursiva que,
dado um n�mero inteiro N, exiba o mesmo na
base 2 (bin�ria). */

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
